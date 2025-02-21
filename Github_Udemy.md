# Complete Git Setup and Usage Guide

## Table of Contents
1. [Git Installation and SSH Setup](#git-installation-and-ssh-setup)
   - [Installing Git on Linux](#1-installing-git-on-linux)
   - [Installing Git on Windows](#2-installing-git-on-windows)
   - [Installing Git on Mac](#3-installing-git-on-mac)
2. [Initial Git Configuration](#initial-git-configuration)
3. [SSH Key Setup](#ssh-key-setup)
4. [Adding SSH Key to GitHub](#adding-ssh-key-to-github)
5. [What is Cloning in Git?](#what-is-cloning-in-git)
   - [How to Clone a Git Repository](#how-to-clone-a-git-repository)

---

# Git Installation and SSH Setup Guide

## Installing Git on Different Operating Systems

### 1. Installing Git on Linux

For Debian-based systems (Ubuntu):
```bash
sudo apt update
sudo apt install git
```

For Red Hat-based systems (Fedora/CentOS):
```bash
sudo dnf install git
```

Verify installation on Linux:
```bash
git --version
```

### 2. Installing Git on Windows

1. Download Git for Windows from [git-scm.com/download/win](https://git-scm.com/download/win)
2. Run the installer (default options are recommended)
3. Verify installation in Git Bash:
```bash
git --version
```

### 3. Installing Git on Mac

Using Homebrew:
```bash
brew install git
git --version
```

## Initial Git Configuration

Set up your Git identity:
```bash
git config --global user.name "Your Name"
git config --global user.email "your.email@example.com"
```

Verify your configuration:
```bash
cat ~/.gitconfig
```

Expected output:
```bash
[user]
  name = YourUsername
  email = your.email@example.com
```

## SSH Key Setup

1. Generate SSH key:
```bash
ssh-keygen -o
```

2. View your private key (keep this secure):
```bash
cat ~/.ssh/id_ed25519
```

Example private key format:
```bash
-----BEGIN OPENSSH PRIVATE KEY-----
[Your private key content will appear here]
-----END OPENSSH PRIVATE KEY-----
```

3. View your public key:
```bash
cat ~/.ssh/id_ed25519.pub
```

Example public key format:
```bash
ssh-ed25519 AAAAC3NzaC1lZDI1NTE5AAAA[...]example japneetsingh@computer.local
```

## Adding SSH Key to GitHub

1. Copy your public key (the output from `cat ~/.ssh/id_ed25519.pub`)
2. Go to GitHub Settings
3. Navigate to "SSH and GPG keys"
4. Click "New SSH key"
5. Give your key a title
6. Paste your public key
7. Click "Add SSH key"

You're now ready to use Git with GitHub securely via SSH!

# What is Cloning in Git?

Cloning in Git means creating a copy of a remote repository (such as on GitHub) to your local machine. This allows you to work with the repository's files and history locally. When you clone a repository, you get all of the files, branches, and commit history from the remote repository.

## How to Clone a Git Repository:

1. **Cloning a repository**:
   You use the `git clone` command followed by the URL of the repository you want to clone. Here's how you do it:

   ```bash
   git clone <repository-url>
   ```

For example:
```bash 
git clone git@github.com:openai/SWELancer-Benchmark.git
```

This command will:
- Clone the SWELancer-Benchmark repository from GitHub to your current directory.
- Create a new directory named SWELancer-Benchmark where the repository's files will be stored.

After running the clone command: When you run the git clone command, Git connects to the remote repository (in this case, GitHub), fetches all the data (files, history, etc.), and sets up the connection for you to push or pull changes to/from that repository.

Dealing with the authenticity prompt: When you connect to GitHub for the first time, you'll see a message like this:
```bash
The authenticity of host 'github.com (140.82.114.4)' can't be established.
Are you sure you want to continue connecting (yes/no/[fingerprint])?
```
Type yes to confirm, and Git will add GitHub's host to your list of known hosts for future connections.

After cloning: You will be able to navigate into the cloned repository folder using the cd command:
```bash
cd SWELancer-Benchmark
```

Inside this directory, you can use ls to list the files and see the repository's contents:
```bash
ls
```

Viewing files: You can view files in the repository by running commands like cat, for example, to see the content of the README.md file:
```bash
cat README.md
```

Summary of Commands in Your Example:

```bash
# Clone the repository
git clone git@github.com:openai/SWELancer-Benchmark.git

# Change directory into the cloned repo
cd SWELancer-Benchmark

# List files in the directory
ls

# View the content of the README.md file
cat README.md
```





# Git Log Command Guide

## Overview
The `git log` command is used to display the commit history of a Git repository. It shows the logs of all commits in the current branch, starting from the most recent commit.

## Basic Usage

To view commit history:
```bash
git log
```

This displays:
- The **commit hash** (unique identifier for each commit)
- The **author** of the commit
- The **date and time** of the commit
- The **commit message** describing the changes

### Example Output
```bash
commit 3d2c9bdfd7b8b5981f1a5a4db7a0f6c238b28b2c (HEAD -> main)
Author: John Doe <john.doe@example.com>
Date: Fri Feb 20 14:53:37 2025 -0500

    Added new feature to the project

commit 9b2d4a1c04a63f39e4f244d930078be3d7a3abf7
Author: Jane Smith <jane.smith@example.com>
Date: Fri Feb 19 10:21:55 2025 -0500

    Fixed bug in login feature
```

## Common Options

### 1. Limit Number of Commits
Show only the last 5 commits:
```bash
git log -n 5
```

### 2. One-Line Format
Display each commit on a single line:
```bash
git log --oneline
```

### 3. Show Changes in Commits
Display the actual code changes (diffs) for each commit:
```bash
git log -p
```

### 4. Filter by Author
Show commits by a specific author:
```bash
git log --author="John Doe"
```

### 5. Filter by Date Range
Show commits within a specific time period:
```bash
git log --since="2025-02-01" --until="2025-02-20"
```

### 6. Graphical Format
Display a graphical representation of commit history with branch information:
```bash
git log --graph --oneline --all
```

## Tips
- Use `q` to exit the log view when in terminal
- Combine options for more specific outputs (e.g., `git log --oneline --author="John" -n 5`)
- The most recent commits appear first in the log
- The commit hash can be used to reference specific commits in other Git commands


# How to Create a New Git Repository

## Steps to Create a New Repository on GitHub

1. **Login to GitHub**
   - Go to [GitHub](https://github.com) and log in to your account

2. **Create New Repository**
   - Click on the **New** button to create a new repository
   - Enter the repository name, e.g., `Git Essentials`
   - Choose whether the repository is **public** or **private**
   - Do not select **Add README** (you can add it later manually)
   - Click **Create Repository**

3. **Get the Repository URL**
   - After creating the repository, GitHub will show you the SSH or HTTPS URL
   - Choose SSH if you have SSH configured; otherwise, use HTTPS

## Local Repository Setup
First select the directory you want to push to github. Select it in terminal. cd "path/to/directory". Then follow the commands...


1. **Initialize a Git repository** on your local machine. 
   ```bash
   git init
   ```

2. **Create a README file**:
   ```bash
   echo "# Git-Essentials-" >> README.md
   ```

3. **Stage and Commit the files**:
   ```bash
   git add README.md
   git commit -m "first commit"
   ```

4. **Add the remote origin**:
   Replace the URL with your GitHub repository URL (SSH or HTTPS):
   ```bash
   git remote add origin git@github.com:JapneetSinghh/Git-Essentials-.git
   ```

5. **Push the code to GitHub**:
   Push the changes to GitHub's `master` branch (or `main` if that's your default):
   ```bash
   git push -u origin master
   ```

   If it's main:
  ```bash
   git push -u origin main
   ```
## Complete Example

Here's the complete sequence of commands:

```bash
echo "# Git-Essentials-" >> README.md
git init
git add README.md
git commit -m "first commit"
git remote add origin git@github.com:JapneetSinghh/Git-Essentials-.git
git push -u origin master
```

# How to Create a New Git Repository and Push Code to GitHub

### Steps to Create a New Repository on GitHub:

1. **Login to GitHub**: Go to [GitHub](https://github.com) and log in to your account.
2. **Create New Repository**:
   - Click on the **New** button to create a new repository.
   - Enter the repository name, e.g., `Git Essentials`.
   - Choose whether the repository is **public** or **private**.
   - Do not select **Add README** (you can add it later manually).
   - Click **Create Repository**.

3. **Get the Repository URL**: After creating the repository, GitHub will show you the SSH or HTTPS URL to clone the repository. Choose SSH if you have SSH configured; otherwise, use HTTPS.

### Local Repository Setup:

1. **Initialize a Git repository** on your local machine:
   ```bash
   git init


# How to Create a New Git Repository and Push Code to GitHub

## Initial Setup

### Steps to Create a New Repository on GitHub

1. **Login to GitHub**
   - Go to [GitHub](https://github.com) and log in to your account

2. **Create New Repository**
   - Click on the **New** button to create a new repository
   - Enter the repository name, e.g., Git Essentials
   - Choose whether the repository is **public** or **private**
   - Do not select **Add README** (you can add it later manually)
   - Click **Create Repository**

3. **Get the Repository URL**
   - After creating the repository, GitHub will show you the SSH or HTTPS URL
   - Choose SSH if you have SSH configured; otherwise, use HTTPS

### Local Repository Setup

1. **Initialize a Git repository** on your local machine:
   ```bash
   git init
   ```

2. **Create a README file**:
   ```bash
   echo "# Git-Essentials-" >> README.md
   ```

3. **Stage and Commit the files**:
   ```bash
   git add README.md
   git commit -m "first commit"
   ```

4. **Add the remote origin**:
   ```bash
   git remote add origin git@github.com:JapneetSinghh/Git-Essentials-.git
   ```

5. **Push the code to GitHub**:
   If you see an error related to the branch name (e.g., `main` or `master`), ensure you're using the correct branch name. After running `git init`, Git will indicate which branch you're on (`main` or `master`).
   
   * If it's `master`:
     ```bash
     git push -u origin master
     ```
   * If it's `main`:
     ```bash
     git push -u origin main
     ```

## Making Changes and Pushing to GitHub Again

After pushing your local code to GitHub, you can make changes to the files and push the updates to GitHub.

1. **Check the status of your files**
   Navigate to your repository's directory and run:
   ```bash
   git status
   ```
   Any newly created or modified files will be shown in **red** (unstaged changes).

2. **Stage the changes**
   Stage all the changes (new and modified files) with:
   ```bash
   git add -A
   ```

3. **Check the status again**
   Run git status again:
   ```bash
   git status
   ```
   The files that were newly created or modified will now be in **green** (staged changes, ready to commit).

4. **Commit the changes**
   Commit the staged changes with a message:
   ```bash
   git commit -m "Second commit successful"
   ```

5. **Push the changes to GitHub**
   Push the changes to your GitHub repository.
   
   If you're using the `master` branch:
   ```bash
   git push -u origin master
   ```
   
   Or, if you're using the `main` branch:
   ```bash
   git push -u origin main
   ```

## Complete Example of Making Changes

Here's the complete sequence of commands for making and pushing changes:

```bash
git status                                 # Check the status of changes
git add -A                                # Stage all changes
git status                                # Verify staged changes (files in green)
git commit -m "Second commit successful"   # Commit the changes
git push -u origin master                 # Or 'git push -u origin main' depending on your branch
```

You have now successfully pushed changes to GitHub and can continue making updates as needed.



# How to Undo and Unstage Changes in Git

## Understanding Git Reset

To undo or unstage a file that has been added (including deleted files), you can use the `git reset` command. This guide explains how to manage these scenarios effectively.

## Scenario: Undoing a Staged Deletion

### Initial Situation
You've deleted `testing.txt` and ran `git add -A`, which staged the deletion. Now you want to unstage the deletion before committing.

### Step-by-Step Guide

1. **Unstage the file** using `git reset`:
   ```bash
   git reset HEAD testing.txt
   ```

2. **Check the status** to confirm the unstaging:
   ```bash
   git status
   ```

   Expected output:
   ```
   On branch master
   Your branch is up to date with 'origin/master'.
   
   Changes not staged for commit:
     (use "git add/rm <file>..." to update what will be committed)
     (use "git restore <file>..." to discard changes in working directory)
         deleted: testing.txt
   
   no changes added to commit (use "git add" and/or "git commit -a")
   ```

## Understanding the Output

After running these commands, `testing.txt` will be:
- Still marked as deleted in your working directory
- No longer staged for commit
- Available for further actions (restore or re-stage)

## Restoring a Deleted File

If you want to restore the file to its original state (undo the deletion completely):
```bash
git restore testing.txt
```

## Complete Example with Terminal Output

Here's a real terminal session showing the complete workflow:

```bash
# Initial status after staging deletion
$ git status
On branch master
Your branch is up to date with 'origin/master'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        deleted:    testing.txt

# Unstaging the deletion
$ git reset HEAD testing.txt
Unstaged changes after reset:
D testing.txt

# Checking status after unstaging
$ git status
On branch master
Your branch is up to date with 'origin/master'.

Changes not staged for commit:
  (use "git add/rm <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        deleted:    testing.txt

no changes added to commit (use "git add" and/or "git commit -a")
```

## Quick Reference

1. **Unstage a file:**
   ```bash
   git reset HEAD <filename>
   ```

2. **Restore a deleted file:**
   ```bash
   git restore <filename>
   ```

Remember that `git reset HEAD <file>` only unstages the file - it doesn't undo the actual deletion in your working directory. To completely undo the deletion, you'll need to use the `git restore` command as shown above.

## Git can help to bring back a deleted file using git checkout command

The git checkout command can be used to restore a deleted file from the last commit.

To get the deleted file back (restore it to the state in the last commit), run:
```bash
git checkout -- testing.txt
```

git checkout -- <file>: This command restores the file from the last commit, undoing any changes (including deletions) in the working directory.


#### How `git checkout -- <file>` Restores a Deleted File

When you use `git checkout -- <file>` to bring back a deleted file, Git restores the file from the **last committed version** of the file in the repository.

### How it works:

1. **File Deleted Locally**:  
   If you delete a file in your working directory, Git recognizes that the file has been removed, but it has not yet been committed as deleted.

2. **Git Checkout Command**:  
   When you run `git checkout -- <file>`, Git looks at the most recent commit where that file existed and restores it from that commit.

3. **Restoration**:  
   The deleted file is restored to your working directory as it was in the last commit, undoing the deletion locally.



# Understanding Git Origins and Using git remote -v

When doing your first commit, you use the following command to add a remote repository:

```bash
git remote add origin git@github.com:JapneetSinghh/Git-Essentials-.git
```

## Checking the Origin

If you want to see what origin you're using, you can run:

```bash
git remote -v
```

### Example Output:

```bash
(base) japneetsingh@Japneets-MacBook-Pro Git Essentials Udemy % git remote -v
origin git@github.com:JapneetSinghh/Git-Essentials-.git (fetch)
origin git@github.com:JapneetSinghh/Git-Essentials-.git (push)
(base) japneetsingh@Japneets-MacBook-Pro Git Essentials Udemy %
```

You'll see two origins:
* **fetch**: Used when downloading updates or files from GitHub
* **push**: Used when pushing updates from your local machine to GitHub

## SSH vs HTTPS

### SSH
If you're using SSH, the origin will look like this:

```bash
git@github.com:JapneetSinghh/Git-Essentials-.git
```

### HTTPS
If you're using HTTPS, the origin will look like this:

```bash
https://github.com/JapneetSinghh/Git-Essentials-.git
```




# How to Create a New Branch in Git

## 1. Check Existing Branches

To see all the branches in your repository, use the `git branch` command. The current branch is marked with an asterisk (*) and displayed in green.

```bash
git branch
```

**Output Example**:
```bash
* master
```

## 2. Create and Switch to a New Branch

To create a new branch and switch to it, use the `git checkout -b <new-branch-name>` command. This will create the branch and make it the active one.

```bash
git checkout -b new-branch
```

**Output Example**:
```bash
Switched to a new branch 'new-branch'
```

Now, run `git branch` again to see both branches:

```bash
git branch
```

**Output Example**:
```bash
  master
* new-branch
```

## 3. Switch Between Branches

To switch back to the original branch (e.g., `master`), use the `git checkout <branch-name>` command.

```bash
git checkout master
```

**Output Example**:
```bash
M Github_Udemy.md
Switched to branch 'master'
Your branch is up to date with 'origin/master'.
```

After switching, run `git branch` to verify your current branch:

```bash
git branch
```

**Output Example**:
```bash
* master
  new-branch
```

## Why Do We Need a New Branch?

Creating a new branch allows you to work on a feature or bug fix without affecting the main codebase (`master` or `main`). It provides isolation for changes, which can be safely tested and reviewed.

## What Can Be Done in a Branch?

In a branch, you can:
* Add new features
* Fix bugs
* Experiment with code changes

Once the work is complete and reviewed, the branch can be merged back into the main branch.

## What Happens to Files and Data When Merging Two Branches?

When you merge two branches in Git, the changes from the source branch are combined into the target branch.

### Key Points:

1. **New Files**: If the source branch has new files, they will be added to the target branch
2. **Modified Files**: If a file was modified in the source branch, its changes will be applied to the target branch
3. **Deleted Files**: If a file was deleted in the source branch, it will also be deleted in the target branch after merging
4. **Merge Conflicts**: If the same file was modified differently in both branches, Git will prompt you to resolve conflicts manually before completing the merge

### Example:

If `new-branch` has updates and we merge it into `master`:

```bash
git checkout master
git merge new-branch
```

Now, all changes from `feature-branch` are included in `master`, and `new-branch` can be deleted if no longer needed.

### How Do Multiple Branches Help in Team Projects?

Multiple branches in Git allow team members to work on different features, bug fixes, or experiments simultaneously without affecting the main codebase. Each developer can create a separate branch for their task, ensuring that changes remain isolated and do not disrupt others. Once a feature is complete and tested, it can be merged into the main branch (e.g., `main` or `develop`), maintaining a clean and organized workflow. This approach enables parallel development, reduces conflicts, improves code review processes, and ensures a stable production environment.


