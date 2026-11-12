class Solution {
public:
    string convertToTitle(int columnNumber) {

        string result = "";

        // STEP 1: Repeat until columnNumber becomes 0.
        // We need to process every alphabet position,
        // starting from the rightmost character.

        while(columnNumber > 0) {

            // STEP 2: Subtract 1.
            // Why?
            // Normal numbers start from 0, but Excel starts from 1.
            //
            // BEFORE: columnNumber = 28
            // AFTER:  columnNumber = 27

            columnNumber--;

            // STEP 3: Find the remainder when divided by 26.
            // This tells us which alphabet to select.
            //
            // BEFORE: columnNumber = 27
            // 27 % 26 = 1
            //
            // remainder = 1 means B.
            
            int remainder = columnNumber % 26;

            // STEP 4: Convert the remainder into an alphabet.
            //
            // 'A' has ASCII value 65.
            // 'A' + 0 = A
            // 'A' + 1 = B
            // 'A' + 2 = C
            //
            // remainder = 1
            // character = 'A' + 1 = B

            char ch = 'A' + remainder;

            // STEP 5: Add the character to the result.
            //
            // BEFORE: result = ""
            // AFTER:  result = "B"

            result += ch;

            // STEP 6: Divide columnNumber by 26.
            // This removes the alphabet position we just processed.
            //
            // BEFORE: columnNumber = 27
            // AFTER:  columnNumber = 27 / 26 = 1

            columnNumber = columnNumber / 26;
        }

        // STEP 7: Reverse the result.
        // We calculate characters from RIGHT to LEFT,
        // but Excel column titles are written LEFT to RIGHT.
        //
        // BEFORE: result = "BA" (for multi-character results)
        // AFTER:  result = "AB"

        reverse(result.begin(), result.end());

        return result;
    }
};