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
    let a = + next(),
        b = + next(),
        c = + next(),
        m = + next(),
        l1 = lcm(a, b),
        l2 = lcm(a, c),
        l3 = lcm(b, c),
        l4 = Math.floor(m /lcm(l1, c));

    l1 = Math.floor(m / l1) - l4;
    l2 = Math.floor(m / l2) - l4;
    l3 = Math.floor(m / l3) - l4;
    
    a = Math.floor(m / a) - l1 - l2 - l4;
    b = Math.floor(m / b) - l1  - l3 - l4;
    c = Math.floor(m / c) - l2 - l3 - l4;
    console.log(a * 6 + (l1 + l2) * 3 + l4 * 2, b * 6 + (l1 + l3) * 3 + l4 * 2, c * 6 + (l2 + l3) * 3 + l4   * 2)
    
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
