/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
     let value = init;
     function increment(){
        value =value+1;
        return value;
     }
     function decrement(){
        value = value-1;
        return value;
     }
     function reset(){
        value = init;
        return value;
     }
     return {
    increment:increment,
    decrement:decrement,
    reset: reset
  }
    
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */