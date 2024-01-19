#include "Solution3.h"
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <iostream>

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
	words = _words;
}

void Solution3::SortWords()
{
    std::vector<std::pair<std::string, int>> wordPairs;
    for (int i = 0; i < words.size(); ++i) {
        wordPairs.push_back({ words[i], i });
    }

    std::sort(wordPairs.begin(), wordPairs.end(),
        [](const auto& a, const auto& b) {
            return std::lexicographical_compare(a.first.begin(), a.first.end(), b.first.begin(), b.first.end(),
            [](unsigned char c1, unsigned char c2) {
                    return std::tolower(c1) < std::tolower(c2);
                });
        });

    std::vector<std::string> sortedWords(words.size());
    for (int i = 0; i < wordPairs.size(); ++i) {
        sortedWords[i] = words[wordPairs[i].second];
    }
    words = sortedWords;
}

std::vector<std::string> Solution3::GetSortedWords() const
{
	return words;
}

#endif
