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
    let s = next(),
        ans = 0,
        _2 = 0,
        _13 = 0;
    for(let i = 0; i < s.length; i ++){
        if(s[i] == '3' || s[i] == '1')
            _13 ++;
    }
    ans = _13;
    for(let i = 0; i < s.length; i ++){
        if(s[i] == '2')
            _2 ++;
        else if(s[i] != '4')
            _13 --;
        ans = Math.max(ans, _13 + _2)
    }

    console.log(s.length - ans);
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
