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
        ma = new Map(),
        ans = 0;
    for(let i = 0; i < n; i ++){
        let x = +next();
        if(ma.has(x))
            ma.set(x, ma.get(x) + 1);
        else
            ma.set(x, 1);
    }
    for (let [x, freq] of ma.entries()){
        if(freq >= x){
            ans += freq - x;
        }
        else{
            ans += freq;
        }
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
