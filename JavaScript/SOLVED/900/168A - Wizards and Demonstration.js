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
    let n = +next(),
        x = +next(),
        y = +next();
    let min = Math.ceil(y * n / 100);
    min -= x;
    if(min < 0)
        min = 0;
    console.log(min);
}

// ---------- MAIN ----------

function main() {
    

    let TC = 1;
    // TC = Number(next());

    while (TC--) {
        solve();
    }
  
}

main();
