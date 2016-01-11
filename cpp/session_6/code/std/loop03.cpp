bool match_pattern(Buffer const& mem)
{
  return mem.size() > 2 && mem[0] == 'E' && mem[1] == 'Z';
}

bool process_buffer(std::vector<Buffer> const& mems)
{
  for(auto const& mem : mems)
  {
    if (match_pattern(mem)) 
      return true;
  }

  return false;
}
