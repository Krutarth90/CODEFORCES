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
        w = + next();
    console.log(n - Math.floor(n / w));
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
