/**
 *  @file
 *  @copyright defined in dcc/LICENSE.txt
 */
#pragma once

#include <dcciolib/system.h>

extern "C" {
  /**
   *  @defgroup compilerbuiltinsapi Compiler Builtins API
   *  @ingroup mathapi
   *  @brief Declares int128 helper builtins generated by the toolchain. 
   *  
   *  @{
   */

 /**
  * Multiply two 128 bit integers split as two 64 bit unsigned integers and assign the value to the first parameter.
  * @brief Multiply two 128 unsigned bit integers (which are represented as two 64 bit unsigned integers. 
  * @param res  It will be replaced with the result product.
  * @param la   Low 64 bits of the first 128 bit factor.
  * @param ha   High 64 bits of the first 128 bit factor.
  * @param lb   Low 64 bits of the second 128 bit factor.
  * @param hb   High 64 bits of the second 128 bit factor.
  * @post `res` is replaced with the result of multiplication
  * Example:
  * @code
  * __int128 res = 0;
  * __int128 a = 100;
  * __int128 b = 100;
  * __multi3(res, a, (a >> 64), b, (b >> 64));
  * printi128(&res); // Output: 10000
  * @endcode
  */
  void __multi3(__int128& res, uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb);

 /**
  * Divide two 128 bit integers split as two 64 bit unsigned integers and assign the value to the first parameter.
  * @brief Divide two 128 bit integers (which are represented as two 64 bit unsigned integers)
  * @param res  It will be replaced with the result product.
  * @param la   Low 64 bits of the first 128 bit factor.
  * @param ha   High 64 bits of the first 128 bit factor.
  * @param lb   Low 64 bits of the second 128 bit factor.
  * @param hb   High 64 bits of the second 128 bit factor.
  * @post `res` is replaced with the result of division
  * Example:
  * @code
  * __int128 res = 0;
  * __int128 a = 100;
  * __int128 b = 100;
  * __divti3(res, a, (a >> 64), b, (b >> 64));
  * printi128(&res); // Output: 1
  * @endcode
  */
  void __divti3(__int128& res, uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb);

 /**
  * Divide two 128 bit unsigned integers split as two 64 bit unsigned integers and assign the value to the first parameter.
  * @brief Divide two 128 unsigned bit integers (which are represented as two 64 bit unsigned integers)
  * @param res  It will be replaced with the result product.
  * @param la   Low 64 bits of the first 128 bit factor.
  * @param ha   High 64 bits of the first 128 bit factor.
  * @param lb   Low 64 bits of the second 128 bit factor.
  * @param hb   High 64 bits of the second 128 bit factor.
  * Example:
  * @code
  * unsigned __int128 res = 0;
  * unsigned __int128 a = 100;
  * unsigned __int128 b = 100;
  * __udivti3(res, a, (a >> 64), b, (b >> 64));
  * printi128(&res); // Output: 1
  * @endcode
  */
  void __udivti3(unsigned __int128& res, uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb);

 /**
  * Perform modular arithmetic on two 128 bit integers split as two 64 bit unsigned integers and assign the value to the first parameter.
  * @brief Perform modular arithmetic on two 128 bit integers (which are represented as two 64 bit unsigned integers)
  * @param res  It will be replaced with the result product.
  * @param la   Low 64 bits of the first 128 bit factor.
  * @param ha   High 64 bits of the first 128 bit factor.
  * @param lb   Low 64 bits of the second 128 bit factor.
  * @param hb   High 64 bits of the second 128 bit factor.
  * @post `res` is replaced with the result of modulus
  * Example:
  * @code
  * __int128 res = 0;
  * __int128 a = 100;
  * __int128 b = 3;
  * __modti3(res, a, (a >> 64), b, (b >> 64));
  * printi128(&res); // Output: 1
  * @endcode
  */
  void __modti3(__int128& res, uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb);

 /**
  * Perform modular arithmetic on two 128 unsigned bit integers split as two 64 bit unsigned integers and assign the value to the first parameter.
  * @brief Perform modular arithmetic on two 128 unsigned bit integers (which are represented as two 64 bit unsigned integers)
  * @param res  It will be replaced with the result product.
  * @param la   Low 64 bits of the first 128 bit factor.
  * @param ha   High 64 bits of the first 128 bit factor.
  * @param lb   Low 64 bits of the second 128 bit factor.
  * @param hb   High 64 bits of the second 128 bit factor.
  * @post `res` is replaced with the result of modulus
  * Example:
  * @code
  * unsigned __int128 res = 0;
  * unsigned __int128 a = 100;
  * unsigned __int128 b = 3;
  * __umodti3(res, a, (a >> 64), b, (b >> 64));
  * printi128(&res); // Output: 1
  * @endcode
  */
  void __umodti3(unsigned __int128& res, uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb);

/**
  * Perform logical shift left on a 128 bit integer split as two 64 bit unsigned integers and assign the value to the first parameter.
  * @brief Perform logical shift left on a 128 bit integer (which is represented as two 64 bit unsigned integers)
  * @param res    It will be replaced with the result product.
  * @param lo     Low 64 bits of the 128 bit factor.
  * @param hi     High 64 bits of the 128 bit factor.
  * @param shift  Number of bits to shift.
  * @post `res` is replaced with the result of the operation
  * Example:
  * @code
  * __int128 res = 0;
  * __int128 a = 8;
  * __lshlti3(res, a, (a >> 64), 1);
  * printi128(&res); // Output: 16
  * @endcode
  */
  void __lshlti3(__int128& res, uint64_t lo, uint64_t hi, uint32_t shift);

 /**
  * Perform logical shift right on a 128 bit integer split as two 64 bit unsigned integers and assign the value to the first parameter.
  * @brief Perform logical shift right on a 128 bit integer (which is represented as two 64 bit unsigned integers)
  * @param res    It will be replaced with the result product.
  * @param lo     Low 64 bits of the 128 bit factor.
  * @param hi     High 64 bits of the 128 bit factor.
  * @param shift  Number of bits to shift.
  * @post `res` is replaced with the result of the operation
  * Example:
  * @code
  * __int128 res = 0;
  * __int128 a = 8;
  * __lshrti3(res, a, (a >> 64), 1);
  * printi128(&res); // Output: 4
  * @endcode
  */
  void __lshrti3(__int128& res, uint64_t lo, uint64_t hi, uint32_t shift);

/**
  * Perform arithmetic shift left on a 128 bit integer split as two 64 bit unsigned integers and assign the value to the first parameter.
  * @brief Perform arithmetic shift left on a 128 bit integer (which is represented as two 64 bit unsigned integers)
  * @param res    It will be replaced with the result product.
  * @param lo     Low 64 bits of the 128 bit factor.
  * @param hi     High 64 bits of the 128 bit factor.
  * @param shift  Number of bits to shift.
  * @post `res` is replaced with the result of the operation
  * Example:
  * @code
  * __int128 res = 0;
  * __int128 a = 8;
  * __ashlti3(res, a, (a >> 64), 1);
  * printi128(&res); // Output: 16
  * @endcode
  */
  void __ashlti3(__int128& res, uint64_t lo, uint64_t hi, uint32_t shift);

 /**
  * Perform arithmetic shift right on a 128 bit integer split as two 64 bit unsigned integers and assign the value to the first parameter.
  * @brief Perform arithmetic shift right on a 128 bit integer (which is represented as two 64 bit unsigned integers)
  * @param res    It will be replaced with the result product.
  * @param lo     Low 64 bits of the 128 bit factor.
  * @param hi     High 64 bits of the 128 bit factor.
  * @param shift  Number of bits to shift.
  * @post `res` is replaced with the result of the operation
  * Example:
  * @code
  * __int128 res = 0;
  * __int128 a = -8;
  * __ashrti3(res, a, (a >> 64), 1);
  * printi128(&res); // Output: -4
  * @endcode
  */
  void __ashrti3(__int128& res, uint64_t lo, uint64_t hi, uint32_t shift);

 /**
  * Add two long doubles split as two 64 bit unsigned integers and assign the value to the first parameter.
  * @brief Add two long doubles (which are represented as two 64 bit unsigned integers)
  * @param ret  It will be replaced with the result product.
  * @param la   Low 64 bits of the first 128 bit factor.
  * @param ha   High 64 bits of the first 128 bit factor.
  * @param lb   Low 64 bits of the second 128 bit factor.
  * @param hb   High 64 bits of the second 128 bit factor.
  * @post `ret` is replaced with the result of the operation
  */
  void __addtf3( long double& ret, uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb );

 /**
  * Subtract two long doubles split as two 64 bit unsigned integers and assign the value to the first parameter.
  * @brief Subtract two long doubles (which are represented as two 64 bit unsigned integers)
  * @param ret  It will be replaced with the result product.
  * @param la   Low 64 bits of the first 128 bit factor.
  * @param ha   High 64 bits of the first 128 bit factor.
  * @param lb   Low 64 bits of the second 128 bit factor.
  * @param hb   High 64 bits of the second 128 bit factor.
  * @post `ret` is replaced with the result of the operation
  */
  void __subtf3( long double& ret, uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb ); 

 /**
  * Multiply two long doubles split as two 64 bit unsigned integers and assign the value to the first parameter.
  * @brief Multiply two long doubles (which are represented as two 64 bit unsigned integers)
  * @param ret  It will be replaced with the result product.
  * @param la   Low 64 bits of the first 128 bit factor.
  * @param ha   High 64 bits of the first 128 bit factor.
  * @param lb   Low 64 bits of the second 128 bit factor.
  * @param hb   High 64 bits of the second 128 bit factor.
  * @post `ret` is replaced with the result of the operation
  */
  void __multf3( long double& ret, uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb ); 

 /**
  * Divide two long doubles split as two 64 bit unsigned integers and assign the value to the first parameter.
  * @brief Divide two long doubles (which are represented as two 64 bit unsigned integers)
  * @param ret  It will be replaced with the result product.
  * @param la   Low 64 bits of the first 128 bit factor.
  * @param ha   High 64 bits of the first 128 bit factor.
  * @param lb   Low 64 bits of the second 128 bit factor.
  * @param hb   High 64 bits of the second 128 bit factor.
  * @post `ret` is replaced with the result of the operation
  */
  void __divtf3( long double& ret, uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb ); 

 /**
  * Check equality between two doubles split as two 64 bit unsigned integers
  * @brief Check equality between two doubles (which are represented as two 64 bit unsigned integers)
  * @param la   Low 64 bits of the first 128 bit factor.
  * @param ha   High 64 bits of the first 128 bit factor.
  * @param lb   Low 64 bits of the second 128 bit factor.
  * @param hb   High 64 bits of the second 128 bit factor.
  * @return 1 if a greater than b
  * @return 0 if a equal to b
  * @return -1 if a less than b
  * @return 1 if either a or b is NaN
  */
  int __eqtf2( uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb ); 

 /**
  * Check inequality between two doubles split as two 64 bit unsigned integers
  * @brief Check inequality between two doubles (which are represented as two 64 bit unsigned integers)
  * @param la   Low 64 bits of the first 128 bit factor.
  * @param ha   High 64 bits of the first 128 bit factor.
  * @param lb   Low 64 bits of the second 128 bit factor.
  * @param hb   High 64 bits of the second 128 bit factor.
  * @return 1 if a greater than b
  * @return 0 if a equal to b
  * @return -1 if a less than b
  * @return1 if either a or b is NaN
  */
  int __netf2( uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb ); 


 /**
  * Check if the first double is greater or equal to the second double, the doubles are split as two 64 bit unsigned integers 
  * @brief Check if the first double is greater or equal to the second double, (the doubles are represented as two 64 bit unsigned integers)
  * @param la   Low 64 bits of the first 128 bit factor.
  * @param ha   High 64 bits of the first 128 bit factor.
  * @param lb   Low 64 bits of the second 128 bit factor.
  * @param hb   High 64 bits of the second 128 bit factor.
  * @return 1 if a greater than b
  * @return 0 if a equal to b
  * @return -1 if a less than b
  * @return -1 if either a or b is NaN
  */
  int __getf2( uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb ); 

 /**
  * Check if the first double is greater than the second double, the doubles are split as two 64 bit unsigned integers 
  * @brief Check if the first double is greater than the second double, (the doubles are represented as two 64 bit unsigned integers)
  * @param la   Low 64 bits of the first 128 bit factor.
  * @param ha   High 64 bits of the first 128 bit factor.
  * @param lb   Low 64 bits of the second 128 bit factor.
  * @param hb   High 64 bits of the second 128 bit factor.
  * @return 1 if a greater than b
  * @return 0 if a equal to b
  * @return -1 if a less than b
  * @return 0 if either a or b is NaN
  */
  int __gttf2( uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb ); 

 /**
  * Check if the first double is less or equal to the second double, the doubles are split as two 64 bit unsigned integers 
  * @brief Check if the first double is less or equal to the second double, (the doubles are represented as two 64 bit unsigned integers)
  * @param la   Low 64 bits of the first 128 bit factor.
  * @param ha   High 64 bits of the first 128 bit factor.
  * @param lb   Low 64 bits of the second 128 bit factor.
  * @param hb   High 64 bits of the second 128 bit factor.
  * @return 1 if a greater than b
  * @return 0 if a equal to b
  * @return -1 if a less than b
  * @return 1 if either a or b is NaN
  */
  int __letf2( uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb ); 

 /**
  * Check if the first double is less than the second double, the doubles are split as two 64 bit unsigned integers 
  * @brief Check if the first double is less than the second double, (the doubles are represented as two 64 bit unsigned integers)
  * @param la   Low 64 bits of the first 128 bit factor.
  * @param ha   High 64 bits of the first 128 bit factor.
  * @param lb   Low 64 bits of the second 128 bit factor.
  * @param hb   High 64 bits of the second 128 bit factor.
  * @return 1 if a greater than b
  * @return 0 if a equal to b
  * @return -1 if a less than b
  * @return 0 if either a or b is NaN
  */
  int __lttf2( uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb ); 

 /**
  * Compare two doubles which are split as two 64 bit unsigned integers 
  * @brief Compare two doubles (the doubles are represented as two 64 bit unsigned integers)
  * @param la   Low 64 bits of the first 128 bit factor.
  * @param ha   High 64 bits of the first 128 bit factor.
  * @param lb   Low 64 bits of the second 128 bit factor.
  * @param hb   High 64 bits of the second 128 bit factor.
  * @return 1 if a greater than b
  * @return 0 if a equal to b
  * @return -1 if a less than b
  * @return 1 if either a or b is NaN
  */
  int __cmptf2( uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb ); 

 /**
  * Check if either of the doubles is NaN, the doubles are split as two 64 bit unsigned integers 
  * @brief Check if either of the doubles is NaN, (the doubles are represented as two 64 bit unsigned integers)
  * @param la   Low 64 bits of the first 128 bit factor.
  * @param ha   High 64 bits of the first 128 bit factor.
  * @param lb   Low 64 bits of the second 128 bit factor.
  * @param hb   High 64 bits of the second 128 bit factor.
  * @return 1 if either a or b is NaN
  * @return 0 if either a or b is not NaN
  */
  int __unordtf2( uint64_t la, uint64_t ha, uint64_t lb, uint64_t hb ); 

 /**
  * Extend float to long double
  * @brief Extend float to long double
  * @param ret  It will be replaced with the result product.
  * @param f    Input float to be extended
  * @post `ret` is replaced with the extended float
  */
  void __extendsftf2( long double& ret, float f ); 

 /**
  * Extend double to long double
  * @brief Extend float to long double
  * @param ret  It will be replaced with the result product.
  * @param f    Input float to be extended
  * @post `ret` is replaced with the extended float
  */
  void __extenddftf2( long double& ret, double f ); 

 /**
  * Convert long double (which are split as two 64 bit unsigned integers) into 64 bit integer
  * @brief Convert long double (which are split as two 64 bit unsigned integers) into 64 bit integer
  * @param l   Low 64 bits of the first 128 bit factor.
  * @param h   High 64 bits of the first 128 bit factor.
  * @return the converted 64 bit integer.
  */
  int64_t __fixtfdi( uint64_t l, uint64_t h ); 

 /**
  * Convert long double (which are split as two 64 bit unsigned integers) into 32 bit integer
  * @brief Convert long double (which are split as two 64 bit unsigned integers) into 32 bit integer
  * @param l   Low 64 bits of the first 128 bit factor.
  * @param h   High 64 bits of the first 128 bit factor.
  * @return the converted 32 bit integer.
  */
  int32_t __fixtfsi( uint64_t l, uint64_t h ); 

 /**
  * Convert long double (which are split as two 64 bit unsigned integers) into 64 bit unsigned integer
  * @brief Convert long double (which are split as two 64 bit unsigned integers) into 64 bit unsigned integer
  * @param l   Low 64 bits of the first 128 bit factor.
  * @param h   High 64 bits of the first 128 bit factor.
  * @return the converted 64 bit unsigned integer.
  */
  uint64_t __fixunstfdi( uint64_t l, uint64_t h ); 

 /**
  * Convert long double (which are split as two 64 bit unsigned integers) into 32 bit unsigned integer
  * @brief Convert long double (which are split as two 64 bit unsigned integers) into 32 bit unsigned integer
  * @param l   Low 64 bits of the first 128 bit factor.
  * @param h   High 64 bits of the first 128 bit factor.
  * @return the converted 32 bit unsigned integer.
  */
  uint32_t __fixunstfsi( uint64_t l, uint64_t h ); 

 /**
  * Truncate long double (which are split as two 64 bit unsigned integers) into double
  * @brief Convert long double (which are split as two 64 bit unsigned integers) into double
  * @param l   Low 64 bits of the first 128 bit factor.
  * @param h   High 64 bits of the first 128 bit factor.
  * @return the converted double
  */
  double __trunctfdf2( uint64_t l, uint64_t h ); 

 /**
  * Truncate long double (which are split as two 64 bit unsigned integers) into float
  * @brief Convert long double (which are split as two 64 bit unsigned integers) into float
  * @param l   Low 64 bits of the first 128 bit factor.
  * @param h   High 64 bits of the first 128 bit factor.
  * @return the converted float
  */
  float __trunctfsf2( uint64_t l, uint64_t h ); 

  void __break_point();

/// @}
} // extern "C"
