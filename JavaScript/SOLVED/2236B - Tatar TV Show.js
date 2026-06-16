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
        k = + next(),
        s = next(),
        a = [];
    for(let i = 0; i < n; i ++){
        if(s[i] === '1'){
            a[i % k] = 1 + (a[i % k] ?? 0);
        }
    }
    for(let i = 0; i < k; i ++){
        if(a[i] % 2){
            console.log("NO");
            return;
        }
    }
    console.log("YES");
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
