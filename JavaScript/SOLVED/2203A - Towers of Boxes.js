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
        m = Number(next()),
        d = Number(next());
    
    console.log(Math.ceil(n / (Math.floor(d / m) + 1)));
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
