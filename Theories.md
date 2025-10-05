📌 Function Call in Memory (Notes)

Har function call ke liye ek stack frame banta hai (stack memory me).

Stack frame me parameters, local variables, aur return address hote hain.

Jab function call hota hai → frame push hota hai stack pe.

Jab function complete hota hai → uska frame pop ho jaata hai.

Function calls hamesha LIFO (Last In First Out) order follow karte hain.

Recursion me har call ek naya frame banata hai, aur base case aane ke baad sab frames wapas ek ek karke pop hote hain.



Global Variable: Function ke bahar banaya jaata hai → sab jagah access hota hai.

Local Variable: Function ke andar banaya jaata hai → sirf usi function me kaam karta hai.




💡 Short Notes Version

Same function name, different parameters = function overloading.

Parameters number ya type me different hone chahiye.

Return type alag hone se alone overloading nahi hoti.

Compiler call pe decide karta hai kaunsa function run hoga.

Code readable aur flexible ho jaata hai.


a       → value
&a      → address of a
*p      → value at address stored in p
&p      → address of pointer p
**q     → value pointed by pointer to pointer

