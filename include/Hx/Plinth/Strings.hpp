//////////////////////////////////////////////////////////////////////////////
//
// Hx
// --
//
// Plinth
//
// Copyright(c) 2015 M.J.Silk
//
// This software is provided 'as-is', without any express or implied
// warranty.In no event will the authors be held liable for any damages
// arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions :
//
// 1. The origin of this software must not be misrepresented; you must not
// claim that you wrote the original software.If you use this software
// in a product, an acknowledgment in the product documentation would be
// appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such, and must not be
// misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
// M.J.Silk
// MJSilk2@gmail.com
//
//////////////////////////////////////////////////////////////////////////////

// Strings

// string manipulation functions

#ifndef HX_PLINTH_STRINGS_HPP
#define HX_PLINTH_STRINGS_HPP

#include <string>
#include <vector>

namespace hx
{
	namespace Strings
	{

// [does not alter any parameters]
std::string lowerCase(std::string string);
// [does not alter any parameters]
std::string upperCase(std::string string);

void makeLowerCase(std::string& string);
void makeUpperCase(std::string& string);

// [does not alter any parameters]
// returns true if the character parameter is a letter (upper- or lower- case) or a number
bool isAlphaNumeric(char c);

// [does not alter any parameters]
// returns true if the entire string parameter is alpha-numeric
bool isAlphaNumeric(const std::string& string);

// [does not alter any parameters]
// concatenates a vector of strings into a single string
std::string concatenate(const std::vector<std::string>& strings);

// [does not alter any parameters]
// true if first parameter contains only characters that are present in the second parameter (strings only, not char arrays)
bool doesContainOnly(const std::string& testString, const std::string& validCharacters);

// [does not alter any parameters]
// pad string with given character on the left
std::string padStringLeft(std::string string, unsigned int width, char character = ' ');

// [does not alter any parameters]
// pad string with given character on the right
std::string padStringRight(std::string string, unsigned int width, char character = ' ');

// [does not alter any parameters]
// returns string with each character replaced by the given character
std::string password(const std::string& string, char shieldChar = '*');
//std::string password(std::string string, char shieldChar = '*');

// [does not alter any parameters]
// replace any character in string that exists in supplementary string with specific character.
// e.g. replace 'a' with '-': Hapax -> H-p-x , replace "Hpx" with '-': Hapax -> -a-p-
std::string replaceChars(std::string string, const std::string& charactersToReplace, char characterToReplaceWith);

// [does not alter any parameters]
// replace any character in string that exists in supplementary string with another string (full string per character - can be empty to remove).
// e.g. replace "Pit" with "123": Plinth -> 123l123n123h
std::string replaceChars(const std::string& string, const std::string& charactersToReplace, const std::string& stringToReplaceWith);

	} // namespace Strings
} // namespace hx

#endif // HX_PLINTH_STRINGS_HPP