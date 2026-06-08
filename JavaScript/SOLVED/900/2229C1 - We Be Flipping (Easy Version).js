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

function gcd(a, b) {
  while (b !== 0) {
    [a, b] = [b, a % b];
  }
  return Math.abs(a);
}

function lcm(a, b) {
  return Math.abs(a * b) / gcd(a, b);
}

// ---------- SOLVE ----------

function solve() {
    let n = + next(),
        a = [],
        isNegative = false,
        ans = [];
    for(let i = 0; i < n; i ++){
        a.push(+ next())
    }
    for(let i = n - 1; i > -1; i --){
        if(isNegative === a[i] < 0){
            ans.push(i + 1);
            isNegative = !isNegative;
        }
    }
    console.log(ans.length);
    console.log(ans.join(' '));
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
