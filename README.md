# CppOperatorIn
Overloaded operator in (alias of &) for std::vector
Useful feature for check is value exist in std::vector. It hides a bunch of real code, but it's really cool in usage.

You just write:

bool contaiansSix = (6 in myContainer);

instead of:
bool containsSix = false;
for (auto elem : myContainer)
{
    if (6 == elem)
    {
      containsSix = true;
      break;
    }
}
