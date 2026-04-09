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
        c = +next(),
        k = +next(),
        a = [];
    
    
    for(let i = 0; i < n; i ++){
        let x = +next();
        a.push(x);
    } 
    a.sort((a, b) => a - b);

    for(let i = 0; i < n; i ++){
        if(!k && c < a[i])
            break;
        let possible = Math.min(c - a[i], k);
        if(possible < 0)
            break;
        k -= possible;
        c += a[i] + possible; 
    }
    console.log(c);
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
