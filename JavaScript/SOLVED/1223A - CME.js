const fs = require("fs");

const input = fs.readFileSync(0, "utf8").trim().split("\n").map(Number);

let idx = 0;
const t = input[idx++];
let output = [];

for (let i = 0; i < t; i++) {
    const n = input[idx++];
    output.push(n === 2 ? 2 : (n & 1));
}

console.log(output.join("\n"));
