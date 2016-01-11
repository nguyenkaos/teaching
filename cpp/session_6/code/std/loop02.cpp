bool match_pattern(Buffer const& mem)
{
  return mem.size() > 2 && mem[0] == 'E' && mem[1] == 'Z';
}

bool process_buffer(std::vector<Buffer> const& mems)
{
  for (auto i = mems.cbegin(); i != mems.cend(); ++i)
  {
    if (match_pattern(*i))
      return true;
  }

  return false;
}
