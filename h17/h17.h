/**
    @file h17.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H17_H_
#define H17_H_
#include <vector>
#include <string>
/**
 *  Opens a file and returns a vector<string> containing words.
 *  @param filename contains the path needed to open the file.
 *  @return a vector<string> of words.
 */
std::vector<std::string> fileToWords(const std::string& filename);


struct WORD
{
    std::string word;
    std::vector<unsigned long> positions;
};

/**
    Reads any stream until end-of-file. Returns a vector of misspelled words,
    but not those words that have been excluded.
    @param in the stream to read from
    @param dictionary vector of string containing correct-spelled words.
    @param excluded vector of string containing words to ignore.
    @return a vector of misspelled words, along with their position in the
        original file.
*/
std::vector<WORD> spellCheck(std::istream& in,
                    const std::vector<std::string>& dictionary,
                    const std::vector<std::string>& excluded);

/////////// SOME STUFF TO TEST YOUR CODE -- IGNORE PLEASE ////////////////////////
#define CHECK_NUM(S, E) {\
        istringstream in(S); \
        vector<WORD> ans = spellCheck(in, dictionary, ignore); \
        assertEqualsMsg(S, E, ans.size());\
        }
#define CHECK_ALL(S, E) {\
    istringstream in(S); \
    vector<WORD> ans = spellCheck(in, dictionary, ignore); \
    if (ans.size() > 0) { \
		string result = ans[0].word; \
		for (unsigned i = 1; i < ans.size(); i++) { \
			result += " " + ans[i].word; \
		} \
		assertEqualsMsg(S, E, result); \
    } else { \
    	failMsg("INCORRECT: No misspelled words found in "#S); \
    }}

#define CHECK_POS(S, E) {\
	istringstream in(S); \
    vector<WORD> ans = spellCheck(in, dictionary, ignore); \
    if (ans.size() > 0) { \
    	string result = to_string(ans[0].positions); \
		assertEqualsMsg(S, E, result); \
    } else { \
    	failMsg("INCORRECT: no multiple misspellings found in "#S); \
    }}
#endif
