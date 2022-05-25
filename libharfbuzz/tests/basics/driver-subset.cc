#include <harfbuzz/hb-subset.h>

int
main ()
{
  hb_subset_input_t* i (hb_subset_input_create_or_fail ());
  if (i == nullptr)
    return 1;

  hb_subset_input_destroy (i);

  return 0;
}
