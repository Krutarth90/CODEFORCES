'use strict';

const fs = require('fs');
const input = fs.readFileSync(0, 'utf-8').trim().split(/\s+/);

let idx = 0;
const next = () => input[idx++];

// ---------- UTILS ----------


function gcd(a, b) {
    while (b !== 0) {
        [a, b] = [b, a % b];
    }
    return Math.abs(a);
}

const mod = (x) => x % 998244353;

const lcm = (a, b) => Math.abs(a * b) / gcd(a, b);

// ---------- SOLVE ----------

function solve() {
    let a = + next(),
        b = + next(),
        c = + next();
    
    console.log(Math.min(Math.max(a, b, c) - Math.min(a, b, c), a + b + c - Math.max(a, b, c) - Math.min(a, b, c)))
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
