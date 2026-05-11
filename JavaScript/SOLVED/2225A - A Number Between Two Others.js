const fs = require("fs");

const input = fs.readFileSync(0, "utf8").trim().split("\n");
let t = Number(input[0]);
let idx = 1;

for (let i = 0; i < t; i++) {
    let [x, y] = input[idx++].split(" ").map(Number);

    let good = false;

    for (let z = x * 2; z < y; z += x) {
        if (y % z !== 0) {
            good = true;
            break;
        }
    }

    console.log(good ? "YES" : "NO");
}
