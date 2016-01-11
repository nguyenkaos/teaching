




bool process_buffer(std::vector<Buffer> const& mems)
{
  return std::find_if(std::cbegin(mems), std::cend(mems)
                     , [](Buffer const& mem)
                       { return mem.size() > 2
                             && mem[0] == 'E'
                             && mem[1] == 'Z'; }
                     ) != std::cend(mems);
}
