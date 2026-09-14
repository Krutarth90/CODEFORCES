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
    let n = + next(),
        f = -1,
        l = -1;

    for(let i = 0; i < n; i ++){
        let x = + next();
        if(x === 0){
            l = i;
            if(f === -1)
                f = i;
        }
    }
    if(f === l || f === -1){
        console.log(-1);
        return;
    }
    console.log((f === 0 ? 0 : 1) + (l === n - 1 ? 0 : 1));

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
