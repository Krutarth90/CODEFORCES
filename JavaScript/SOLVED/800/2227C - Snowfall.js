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
        _6 = [],
        _2 = [],
        _3 = [],
        _1 = [];
    for(let i = 0; i < n; i ++){
        let x = + next();
        if(x % 6 === 0){
            _6.push(x);
        }
        else if(x % 2 === 0){
            _2.push(x);
        }
        else if(x % 3 === 0){
            _3.push(x);
        }
        else{
            _1.push(x);
        }
    }
    _6 = [..._6, ..._2, ..._1, ..._3];
    console.log(`${_6.join(' ')}`)

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
