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
    let n = Number(next()),
        mul = 1;
    for(let i = 0 ; i < n; i ++)
    {
        let x = +next();
        mul *= x;
    }
    console.log((mul + n - 1) *  2022);
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
