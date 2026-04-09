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
    let n = +next();
    let map = new Map();
    for(let i = 0; i < n; i ++){
        for(let j = 0; j < n; j ++){
            let s = +next();
            if(!map.has(s))
                map.set(s, 0);
            map.set(s, map.get(s) + 1);
        }
    }
    if(n )
    for(let [, val] of map){
        if(val > n * n - n){
            console.log('NO');
            return;
        }
    }
    console.log('YES');  
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
