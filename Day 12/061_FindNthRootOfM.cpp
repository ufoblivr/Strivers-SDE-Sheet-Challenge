//https://www.codingninjas.com/codestudio/problems/find-nth-root-of-m_8230799?challengeSlug=striver-sde-challenge&leftPanelTab=0

int NthRoot(int n, int m) {
  double root = pow(m, 1.0 / n); // Calculate the Nth root using pow() function

  // Check if the calculated root, when rounded to the nearest integer, is equal to the original root
  int roundedRoot = static_cast<int>(round(root));
  if (pow(roundedRoot, n) == m)
    return roundedRoot;
  else
    return -1; // If the Nth root is not an integer, return -1
}
