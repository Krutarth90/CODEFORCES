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
    const p = BigInt(next());
    const a = BigInt(next());
    const b = BigInt(next());
    const c = BigInt(next());

    const ceilMul = (x) => ((p + x - 1n) / x) * x;

    const ans = [ceilMul(a), ceilMul(b), ceilMul(c)]
        .reduce((mn, v) => (v < mn ? v : mn)) - p;

    console.log(ans.toString());
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
