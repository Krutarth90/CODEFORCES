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
    let n = + next(),
        a = [],
        sum = 0;
    for(let i = 0; i < n; i ++){
        let x = + next();
        a.push(x);
        sum += x;
    }
    if(!sum){
        console.log('NO');
        return;
    }
    console.log('YES');
    if(sum < 0){
        a.sort((a, b) => a - b)
    }
    else{
        a.sort((a, b) => b- a)
    }
    console.log(...a);
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
