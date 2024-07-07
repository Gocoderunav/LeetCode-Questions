/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */
var promiseAll = async function(functions) {
     return await new Promise((resolve,reject)=>{
            let allPromises = functions.length;
            const res = new Array(functions.length).fill(null);
            // loop
            functions.forEach(async (ele,indx)=>{
                 try {
                     // ele is a aysnc function
                     const subRes = await ele();
                     res[indx] = subRes;
                     allPromises--;
                     if(allPromises === 0){
                        return resolve(res);
                     }
                     
                 } catch(err){
                     reject(err);
                 }

            })
     })
};

/**
 * const promise = promiseAll([() => new Promise(res => res(42))])
 * promise.then(console.log); // [42]
 */