bool match_pattern(Buffer const& mem)
{
  return mem.size() > 2 && mem[0] == 'E' && mem[1] == 'Z';
}

bool process_buffer(std::vector<Buffer> const& mems)
{
  return find_if( std::cbegin(mems), std::cend(mems)
                , match_pattern
                ) != std::cend(mems);
}

