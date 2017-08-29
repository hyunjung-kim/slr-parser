#pragma once

#include "ProductionRule.h"

// A -> aB | B
// B -> bC | C
// C -> c

// std::vector<std::wstring> rules = rules["A"].Rules;
// 

namespace slrparser
{
	void ProductionRule_deprecated::AddRule(const std::string & lhs, std::vector<std::string> & rhs)
	{
		rules_.emplace(lhs, rhs);
	}

	size_t ProductionRule_deprecated::RuleCount()
	{
		return rules_.size();
	}

	std::vector<std::string> ProductionRule_deprecated::Vn(std::string vn)
	{
		return rules_[vn];
	}
}