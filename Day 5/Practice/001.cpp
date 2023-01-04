#include <bits/stdc++.h>
using namespace std;

int main() {
  int nSrcFiles, nIgFiles, nTrFiles;
  cin >> nSrcFiles >> nIgFiles >> nTrFiles;

  // Ignored Source Files
  int ignoredFiles[nIgFiles];

  for (int i = 0; i < nIgFiles; i++) {
    cin >> ignoredFiles[i];
  }

  // Tracked Source Files
  int trackedFiles[nTrFiles];

  for (int i = 0; i < nTrFiles; i++) {
    cin >> trackedFiles[i];
  }

  // No of Tracked and Ignored Files
  int noOfTrAndIgFiles = 0;

  for (int ignoredFile : ignoredFiles) {
    for (int trackedFile : trackedFiles) {
      if (ignoredFile == trackedFile)
        noOfTrAndIgFiles++;
    }
  }

  // To find No of Untracked and Unignored Files
  // use set to remove duplicates
  set<int> filesSet;

  for (int ignoredFile : ignoredFiles) {
    filesSet.insert(ignoredFile);
  }

  for (int trackedFile : trackedFiles) {
    filesSet.insert(trackedFile);
  }

  // No of Untracked and Unignored Files = totalFiles - (no of tracked files & ignored files without duplicates)
  int noOfUnTrAndUnIgFiles = nSrcFiles - filesSet.size();

  cout << noOfTrAndIgFiles << ' ' << noOfUnTrAndUnIgFiles;

  return 0;
}