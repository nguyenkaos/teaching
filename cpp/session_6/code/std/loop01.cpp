bool match_pattern(Buffer const& mem)
{
  return mem.size() > 2 && mem[0] == 'E' && mem[1] == 'Z';
}

bool process_buffer(std::vector<Buffer> const& mems)
{
  std::vector<Buffer>::const_iterator i = mems.cbegin();

  for ( ; i != mems.cend(); ++i)
  {
    if (match_pattern(*i))
      return true;
  }

  return false;
}
