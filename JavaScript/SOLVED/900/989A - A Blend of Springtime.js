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
    let s = next();
    for(let i = 1; i < s.length - 1; i ++){
        if(s[i] === '.' || s[i + 1] === '.' || s[i - 1] === '.'){
            continue;
        }
        const se = new Set([s[i], s[i + 1], s[i - 1]]);
        if(se.size == 3){
            return console.log('Yes');
        }
    }
    console.log('No');
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
