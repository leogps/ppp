//
// Created by Darien Pardinas Diaz on 9/23/18.
//

#pragma once

#include <string>

namespace crow
{

struct request;
}

class MultiPartFormParser
{

public:
    bool parse(const crow::request & req);

    int contentStartOffset() const;

    int contentSize() const;

private:
    std::string m_boundary;

    std::string m_filename;

    std::string m_contentTypeFile;

    int m_contentStart = 0;

    int m_contentSize = 0;
};