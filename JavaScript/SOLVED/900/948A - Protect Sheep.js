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
    let r = + next(),
        c = + next(),
        hasAns = true,
        prev = null,
        ans = [];
    
    for(let i = 0; i < r; i ++){
        let s = next();
        for(let j = 0; j < c; j ++){
            if(!hasAns)
                break;

            if((j && (s[j] === 'S' && s[j - 1] === 'W') || (s[j - 1] === 'S' && s[j] === 'W')) 
                || (prev && (prev[j] === 'S' && s[j] === 'W' || prev[j] === 'W' && s[j] === 'S')))
                hasAns = false
        }
        prev = s;
        ans.push(s);
    }
    if(!hasAns){
        console.log("No");
        return;
    }
    console.log("Yes");
    for(let i = 0; i < r; i ++){
        let s = '';
        for(let j = 0; j < c; j ++){
            s += ans[i][j] === '.' ? 'D' : ans[i][j];
        }
        console.log(s);
    }
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
