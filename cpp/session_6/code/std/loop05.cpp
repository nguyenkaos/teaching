bool process_buffer(std::vector<Buffer> const& mems)
{
  return find_if( cbegin(mems), cend(mems)
                , [](Buffer const& mem)
                  {
                    return   mem.size() > 2
                          && mem[0] == 'E'
                          && mem[1] == 'Z';
                  }
                ) != cend(mems) ;
}
