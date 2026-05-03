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
        m1 = new Map(),
        m2 = new Map(),
        a = [];
    for(let i = 0; i < n; i ++){
        a.push(+ next());
    }
    let m = + next();
    let ans = true;
    for(let i = 0; i < m; i ++){
        m1.clear();
        m2.clear();
        ans = true;
        let s = next();
        if(s.length != n){
            console.log('NO');
            continue
        }
        for(let index = 0; index < s.length; index ++){
            if(!m1.has(s.slice(index, index + 1)) && !m2.has(a[index])){
                m1.set(s.slice(index, index + 1), a[index]);
                m2.set(a[index], s.slice(index, index + 1));
            } else if((m1.has(s.slice(index, index + 1)) && m1.get(s.slice(index, index + 1)) != a[index]) || (m2.has(a[index]) && m2.get(a[index]) != s.slice(index, index + 1))){
                ans = false;
                break;
            }
        }
        console.log(ans ? 'YES': 'NO');
    }
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
