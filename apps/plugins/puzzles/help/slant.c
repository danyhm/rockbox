/* auto-generated by genhelp.sh */
/* DO NOT EDIT! */
const char help_text[] = 
"#Chapter 20: Slant "
"\n"
"You have a grid of squares. Your aim is to draw a diagonal line "
"through each square, and choose which way each line slants so that "
"the following conditions are met: "
"\n"
"- The diagonal lines never form a loop. "
"\n"
"- Any point with a circled number has precisely that many lines "
"meeting at it. (Thus, a 4 is the centre of a cross shape, "
"whereas a zero is the centre of a diamond shape - or rather, a "
"partial diamond shape, because a zero can never appear in the "
"middle of the grid because that would immediately cause a loop.) "
"\n"
"Credit for this puzzle goes to Nikoli [8]. "
"\n"
"[8] http://www.nikoli.co.jp/ja/puzzles/gokigen_naname (in Japanese) "
"\n"
"\n#20.1 Slant controls "
"\n"
"Left-clicking in a blank square will place a \\ in it (a line leaning "
"to the left, i.e. running from the top left of the square to the "
"bottom right). Right-clicking in a blank square will place a / in it "
"(leaning to the right, running from top right to bottom left). "
"\n"
"Continuing to click either button will cycle between the three "
"possible square contents. Thus, if you left-click repeatedly in a "
"blank square it will change from blank to \\ to / back to blank, and "
"if you right-click repeatedly the square will change from blank to / "
"to \\ back to blank. (Therefore, you can play the game entirely with "
"one button if you need to.) "
"\n"
"You can also use the cursor keys to move around the grid. Pressing "
"the return or space keys will place a \\ or a /, respectively, and "
"will then cycle them as above. You can also press / or \\ to place a "
"/ or \\, respectively, independent of what is already in the cursor "
"square. Backspace removes any line from the cursor square. "
"\n"
"(All the actions described in section 2.1 are also available.) "
"\n"
"\n#20.2 Slant parameters "
"\n"
"These parameters are available from the `Custom...' option on the "
"`Type' menu. "
"\n"
"_Width_, _Height_ "
"\n"
"Size of grid in squares. "
"\n"
"_Difficulty_ "
"\n"
"Controls the difficulty of the generated puzzle. At Hard "
"level, you are required to do deductions based on knowledge of "
"_relationships_ between squares rather than always being able to "
"deduce the exact contents of one square at a time. (For example, "
"you might know that two squares slant in the same direction, "
"even if you don't yet know what that direction is, and this "
"might enable you to deduce something about still other squares.) "
"Even at Hard level, guesswork and backtracking should never be "
"necessary. "
"\n"
;
const char quick_help_text[] = "Draw a maze of slanting lines that matches the clues.";