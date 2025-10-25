/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function (n) {
    let temp = n - 1

    return function () {
        temp += 1
        return temp
    };
};