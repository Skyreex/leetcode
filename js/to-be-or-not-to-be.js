/**
 * @param {string} val
 * @return {Object}
 */
var expect = function (val) {
    return {
        toBe: function (arg) {
            if (arg !== val) throw new Error("Not Equal")
            return true
        },
        notToBe: function (arg) {
            if (arg === val) throw new Error("Equal")
            return true
        },
    }

};