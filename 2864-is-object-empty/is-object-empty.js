/**
 * @param {Object|Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    if(Object.keys(obj).length === 0){
        return true;
    }

    for(let a in obj){
        return false;
    }
    return true;
};