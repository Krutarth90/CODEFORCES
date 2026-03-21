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
    let a1 = +next(),
        b1 = +next(),
        a2 = +next(),
        b2 = +next();

    if(a1 < b1)
        [a1, b1] = [b1, a1];
    if(a2 < b2)
        [a2, b2] = [b2, a2];
    if(a1 === a2 && b1 + b2 === a1)
        console.log('Yes');
    else
        console.log('No');
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
