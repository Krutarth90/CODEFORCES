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
    let n = + next(), ans = [];
    for(let i = 1; i <= n; i ++){
        ans.push(i, i);
    }
    for(let i = 1; i <= n; i ++){
        ans.push(i);
    }
    for(let i = 1; i < n; i ++){
        ans.push(i);
    }
    console.log(n, ans.join(' '));
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
