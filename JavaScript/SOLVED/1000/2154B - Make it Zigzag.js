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
    let n = + next(),
        ma = 0,
        prev = Infinity,
        ans = 0;
    for(let i = 0; i < n; i ++){
        let x = + next();
        ma = Math.max(ma, x);
        if(i % 2){
            x = ma;
            if(x <= prev)
                ans += prev - x + 1;
        }
        else if(x >= prev){
            ans += x - prev + 1;
            x = prev - 1;
        }
        prev = x;
    }
    console.log(ans);
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
