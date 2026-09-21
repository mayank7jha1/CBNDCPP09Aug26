#include <climits>
#include <cstring>
#include <iostream>
using namespace std;

int main() {

  /*
   * 1. Take 1-based indexing input array.
   * 2. Build the prefix array similarly for 1-based.
   * 3. Find the minimum and maximum of the prefix array/
   * 4. Iterate over the prefix array from 0 index even though you have build it
   *    from 1 based simply because you want that extra 0 freq to be added in
   * the freq array.
   * 5. Now For different Question Idea can differ.
   *    1. Subarray Sum Zero :
   *        kya mere current index se pehle zero ek bar bhi aaya hain
   *        for pre[i]=0 case.
   *        kya mere current index se pehle pre[i] vala same element aaya hain.
   *        for case pre[i]=pre[r] case.
   *        maine dono above condition ko club kiya and bola pre array ko aap
   *        zero se start karo and bas check karo ki ith element in pre se pehle
   *        kya ye element aaya hua hain ki nahi?
   *        Important Point to Note : Aap freq aaray hamaesha shifted scale par
   *        banaoge.
   *        ss=os-mini.
   *    2. Subarray Sum k :
   *        kya mere current index se pehle (pre[i]==k) ek bar bhi aaya hain
   *        for pre[i]=k case.
   *        kya mere current index se pehle (pre[i]-k) vala same element aaya
   * hain. for case pre[r]-k=pre[l-1] case.
   *
   *        maine dono above condition ko club kiya and bola pre array ko aap
   *        zero se start karo and bas check karo ki ith element in pre se pehle
   *        kya ye element (pre[i]-k) aaya hua hain ki nahi?
   *        Important Point to Note : Aap freq aaray hamaesha shifted scale par
   *        banaoge.
   *        ss=os-mini.
   *        Build karna mat bhulna apna freq array in shifted scale.
   *
   *
   *
   */

  return 0;
}
