'use strict';

const fs = require('fs');
const input = fs.readFileSync(0, 'utf-8').trim().split(/\s+/);

let idx = 0;
function next() {
    return input[idx++];
}

// ---------- UTILS ----------

// mod function
function mod(x) {
    return x % 998244353;
}

// YES / NO helpers
function YES(output) {
    output.push("YES");
}

function NO(output) {
    output.push("NO");
}

// ---------- SOLVE ----------

function solve() {
    let x = + next(),
        ans = 0,
        and = true,
        xor = true,
        bit = 1;
    while (1) {
        if(bit > x)
            break;
        if(and && (bit & x)){
            ans |= bit;
            and = false;
            break;
        }
        bit <<= 1;
    }
    if((ans & x) > 0 && (ans ^ x) > 0)
        console.log(ans);
    else
    {
        bit = 1;
        while(1){
            if(bit ^ x){
                console.log(ans | bit);
                return;
            }
            bit <<= 1;
        }
    }
}

// ---------- MAIN ----------

function main() {
    

    let TC = 1;
    TC = Number(next());

    while (TC--) {
        solve();
    }
  
}

main();
