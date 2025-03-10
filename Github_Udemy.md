# Complete Git Setup and Usage Guide
## By Japneet Singh

# Git Installation and Setup Guide - Index

## Table of Contents
- [Chapter 1: Git Installation and SSH Setup Guide](#ch-1-git-installation-and-ssh-setup-guide)
  - [Installing Git on Different Operating Systems](#installing-git-on-different-operating-systems)
  - [Initial Git Configuration](#initial-git-configuration)
- [Chapter 2: SSH Key Setup](#ch-2-ssh-key-setup)
  - [Generating SSH Key](#1-generating-ssh-key)
  - [Adding SSH Key to GitHub](#2-adding-ssh-key-to-github)
- [Chapter 3: What is Cloning in Git?](#ch-3-what-is-cloning-in-git)
  - [How to Clone a Git Repository](#how-to-clone-a-git-repository)
- [Chapter 4: Git Log Command Guide](#ch-4-git-log-command-guide)
  - [Overview and Basic Usage](#overview)
  - [Common Options](#common-options)
  - [Tips for Using Git Log](#tips)

- [Chapter 5: How to Create a New Git Repository](#ch-5-how-to-create-a-new-git-repository)
  - [Steps to Create a New Repository on GitHub](#steps-to-create-a-new-repository-on-github)
  - [Local Repository Setup](#local-repository-setup)
  - [Complete Example](#complete-example)
- [Chapter 6: How to Create a New Git Repository and Push Code to GitHub](#ch-6-how-to-create-a-new-git-repository-and-push-code-to-github)
  - [Initial Setup](#initial-setup)
  - [Steps to Create a New Repository on GitHub](#steps-to-create-a-new-repository-on-github-1)
  - [Local Repository Setup](#local-repository-setup-1)
- [Chapter 7: Making Changes and Pushing to GitHub Repository](#ch-7-making-changes-and-pushing-to-github-repository)
  - [Complete Example of Making Changes](#complete-example-of-making-changes)
- [Chapter 8: How to Undo and Unstage Changes in Git](#ch-8-how-to-undo-and-unstage-changes-in-git)
  - [Understanding Git Reset](#understanding-git-reset)
  - [Scenario: Undoing a Staged Deletion](#scenario-undoing-a-staged-deletion)
  - [Understanding the Output](#understanding-the-output)
  - [Restoring a Deleted File](#restoring-a-deleted-file)
  - [Complete Example with Terminal Output](#complete-example-with-terminal-output)
  - [Quick Reference](#quick-reference)
- [Chapter 9: Git can help to bring back a deleted file using git checkout command](#ch-9-git-can-help-to-bring-back-a-deleted-file-using-git-checkout-command)
  - [How `git checkout -- <file>` Restores a Deleted File](#how-git-checkout----file-restores-a-deleted-file)
- [Chapter 10: Understanding Git Origins and Using git remote -v](#ch-10-understanding-git-origins-and-using-git-remote--v)
  - [Checking the Origin](#checking-the-origin)
  - [SSH vs HTTPS](#ssh-vs-https)
 
- [Ch 11: Branching in git](#ch-11-branching-in-git)
  - [How to Create a New Branch in Git](#how-to-create-a-new-branch-in-git)
  - [Why Do We Need a New Branch?](#why-do-we-need-a-new-branch)
  - [What Can Be Done in a Branch?](#what-can-be-done-in-a-branch)
  - [What Happens to Files and Data When Merging Two Branches?](#what-happens-to-files-and-data-when-merging-two-branches)
  - [How Do Multiple Branches Help in Team Projects?](#how-do-multiple-branches-help-in-team-projects)
  - [Working with a Team in Git](#working-with-a-team-in-git)
  - [How to Pull Changes from the Master Branch](#how-to-pull-changes-from-the-master-branch)

- [Ch 12: Handling Push Rejections Due to Remote Changes](#ch-12-handling-push-rejections-due-to-remote-changes)
  - [Scenario](#scenario)
  - [Why Does This Happen?](#why-does-this-happen)
  - [Error: Push Rejected](#error-push-rejected)
  - [Step 1: Pull the Latest Changes](#step-1-pull-the-latest-changes)
  - [Step 2: Use Rebase to Fix the Issue](#step-2-use-rebase-to-fix-the-issue)
  - [Step 3: Push Your Changes](#step-3-push-your-changes)

- [Ch 13: Checking If Your Local Repository Is Behind the Remote Repository](#ch-13-checking-if-your-local-repository-is-behind-the-remote-repository)
  - [1. Check Your Current Position in Git History](#1-check-your-current-position-in-git-history)
  - [2. Fetch Remote Changes Without Merging](#2-fetch-remote-changes-without-merging)
  - [3. Pull the Latest Changes to Update Your Local Code](#3-pull-the-latest-changes-to-update-your-local-code)

- [Ch 14: Revisiting an Older Commit and Creating a New Branch](#ch-14-revisiting-an-older-commit-and-creating-a-new-branch)
  - [1. Finding the Older Commit](#1-finding-the-older-commit)
  - [2. Checking Out an Older Commit](#2-checking-out-an-older-commit)
  - [3. Creating a New Branch from an Older Commit](#3-creating-a-new-branch-from-an-older-commit)
  - [Why is This Useful?](#why-is-this-useful)
 
I'll create a clickable heading index for this document in Markdown format.

# Git Tutorial Table of Contents (Continued)

- [Ch 15: Git Stash: Save and Restore Uncommitted Changes](#ch-15-git-stash-save-and-restore-uncommitted-changes)
  - [What is `git stash`?](#what-is-git-stash)
  - [Scenario: Switching Branches with Uncommitted Changes](#scenario-switching-branches-with-uncommitted-changes)
  - [Restoring Stashed Changes](#restoring-stashed-changes)
  - [Practical Use Cases of `git stash`](#practical-use-cases-of-git-stash)
  - [Git Diff: Viewing Changes in Git](#git-diff-viewing-changes-in-git)
  - [Git Ignore (`.gitignore`) - Excluding Files from Git Tracking](#git-ignore-gitignore---excluding-files-from-git-tracking)

- [Ch 16: Creating Git Aliases to Save Time](#ch-16-creating-git-aliases-to-save-time)
  - [Why Use Git Aliases?](#why-use-git-aliases)
  - [How to Create a Git Alias](#how-to-create-a-git-alias)
  - [Using the Aliases](#using-the-aliases)
  - [Checking Existing Aliases](#checking-existing-aliases)

- [Ch 17: Changing Commit Message in Git](#ch-17-changing-commit-message-in-git)
  - [Editing the Commit Message](#editing-the-commit-message)

- [Ch 18: How to Reset a Commit in Git](#ch-18-how-to-reset-a-commit-in-git)
  - [Soft Reset](#soft-reset)
  - [Hard Reset in Git](#hard-reset-in-git)

- [Ch 19: How to Delete a Commit Even After It Is Pushed](#ch-19-how-to-delete-a-commit-even-after-it-is-pushed)
  - [Creating a Commit (Example Scenario)](#creating-a-commit-example-scenario)
  - [Deleting the Last Pushed Commit (Using Hard Reset)](#deleting-the-last-pushed-commit-using-hard-reset)
  - [Verifying That the Commit is Deleted](#verifying-that-the-commit-is-deleted)
  - [Alternative: Undo a Commit Without Deleting Changes](#alternative-undo-a-commit-without-deleting-changes)

- [Ch 20: Git Revert: Undoing Commits Safely](#ch-20-git-revert-undoing-commits-safely)
  - [What is `git revert`?](#what-is-git-revert)
  - [When to Use `git revert`?](#when-to-use-git-revert)
  - [What to Take Care of?](#what-to-take-care-of)
  - [Usage Examples](#usage-examples)

- [Ch 21: Understanding `git rebase` in Git](#ch-21-understanding-git-rebase-in-git)
  - [What is `git rebase`?](#what-is-git-rebase)
  - [When to Use `git rebase`?](#when-to-use-git-rebase)
  - [Fixing Rebase Conflicts in Git](#fixing-rebase-conflicts-in-git)

- [Ch 22: Git Stash: Save Work Without Committing](#ch-22-git-stash-save-work-without-committing)
  - [What is `git stash`?](#what-is-git-stash-1)
  - [When & Where to Use `git stash`?](#when--where-to-use-git-stash)
  - [How to Use `git stash`](#how-to-use-git-stash)  

---

# Ch 1: Git Installation and SSH Setup Guide

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

# Ch 2: SSH Key Setup
## 1. Generating SSH  Key
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

## 2. Adding SSH Key to GitHub

1. Copy your public key (the output from `cat ~/.ssh/id_ed25519.pub`)
2. Go to GitHub Settings
3. Navigate to "SSH and GPG keys"
4. Click "New SSH key"
5. Give your key a title
6. Paste your public key
7. Click "Add SSH key"

You're now ready to use Git with GitHub securely via SSH!

# Ch 3: What is Cloning in Git?

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





# Ch 4: Git Log Command Guide

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


# Ch 5: How to Create a New Git Repository

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


# Ch 6: How to Create a New Git Repository and Push Code to GitHub

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

# Ch 7: Making Changes and Pushing to GitHub Repository

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



# Ch 8: How to Undo and Unstage Changes in Git

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

# Ch 9: Git can help to bring back a deleted file using git checkout command

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



# Ch 10: Understanding Git Origins and Using git remote -v

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



# Ch 11: Branching in git
## How to Create a New Branch in Git

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


# Working with a Team in Git

When working on a team project, you often need to collaborate by cloning a teammate's repository, creating a new branch, making changes, and merging it back.

## 1. Clone the Repository

First, clone the repository from GitHub to your local machine:
```bash
git clone git@github.com:JapneetSinghh/Git-Essentials-.git
```

Navigate to the cloned directory:
```bash
cd Git-Essentials-
```

Check the remote origin:
```bash
git remote -v
```

## 2. Create and Work on a New Branch

Create and switch to a new branch:
```bash
git checkout -b new-cloned-branch
```

Verify the branch:
```bash
git branch
```

Make changes to files and folders, then stage the changes:
```bash
git add -A
```

Commit the changes:
```bash
git commit -m "Cloned folder and new-cloned-branch, testing merge"
```

Push the new branch to GitHub:
```bash
git push origin new-cloned-branch
```

## 3. Merge the New Branch into Master

Switch back to the `master` branch:
```bash
git checkout master
```

Pull the latest updates from GitHub to ensure `master` is up-to-date:
```bash
git pull origin master
```

Merge `new-cloned-branch` into `master`:
```bash
git merge new-cloned-branch
```

Push the updated `master` branch to GitHub:
```bash
git push origin master
```

## Git Team Workflow with Comments

```bash
# Clone the repository from GitHub
git clone git@github.com:JapneetSinghh/Git-Essentials-.git

# Navigate into the cloned repository
cd Git-Essentials-

# Create and switch to a new branch
git checkout -b new-cloned-branch

# Stage all changes (new, modified, deleted files)
git add -A

# Commit the changes with a message
git commit -m "Cloned folder and new-cloned-branch, testing merge"

# Push the new branch to GitHub
git push origin new-cloned-branch

# Switch back to the master branch
git checkout master

# Pull the latest changes from the remote master branch to keep it up-to-date
git pull origin master

# Merge the new branch into master
git merge new-cloned-branch

# Push the updated master branch to GitHub
git push origin master
```



# How to Pull Changes from the Master Branch

When working in a team, if a teammate has made changes to the `master` branch on GitHub, you need to update your local repository to reflect those changes.

## **Pulling Changes from Master**
Use the following command to pull the latest updates from the `master` branch:
```bash
git pull origin master
```

This will:

Fetch the latest changes from GitHub.

Merge them into your local master branch.

Update your local directory with the latest files and modifications.


# Ch 12: Handling Push Rejections Due to Remote Changes

## Scenario
A teammate has added new files and committed changes to the `master` branch on GitHub.  
You also made local changes and tried to push them, but your push was **rejected** because your local repository is outdated.

## Why Does This Happen?
Git prevents you from pushing because your local branch does not contain the latest changes from the remote repository. To resolve this, you need to **pull** the latest updates first.

## Error: Push Rejected
When you try to push, you might see the following error:

```bash
(base) japneetsingh@Japneets-MacBook-Pro Git Essentials Udemy % git push origin master
To github.com:JapneetSinghh/Git-Essentials-.git
 ! [rejected]        master -> master (fetch first)
error: failed to push some refs to 'github.com:JapneetSinghh/Git-Essentials-.git'
hint: Updates were rejected because the remote contains work that you do not
hint: have locally. This is usually caused by another repository pushing to
hint: the same ref. If you want to integrate the remote changes, use
hint: 'git pull' before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
```

This means your local `master` branch is **outdated** compared to the remote `master` branch on GitHub.

## Step 1: Pull the Latest Changes
To update your local repository with the latest changes from GitHub, run:

```bash
git pull origin master
```

However, sometimes this may result in another error:

### Error: Divergent Branches
You may get the following error when pulling:

```bash
(base) japneetsingh@Japneets-MacBook-Pro Git Essentials Udemy % git pull origin master
From github.com:JapneetSinghh/Git-Essentials-
 * branch master -> FETCH_HEAD
 7eafe59..7a39af2 master -> origin/master
hint: You have divergent branches and need to specify how to reconcile them.
hint: You can do so by running one of the following commands sometime before
hint: your next pull:
hint:
hint: git config pull.rebase false # merge
hint: git config pull.rebase true # rebase
hint: git config pull.ff only # fast-forward only
fatal: Need to specify how to reconcile divergent branches.
```

### Why Did I Get This Error?
This happens because **your local branch and the remote branch have different commits that Git cannot automatically merge**. Git needs to know how you want to combine these changes.

## Step 2: Use Rebase to Fix the Issue
To resolve the divergence and apply your changes on top of the latest remote changes, use:

```bash
git pull origin master --rebase
```

**Example Output:**
```bash
From github.com:JapneetSinghh/Git-Essentials-
 * branch master -> FETCH_HEAD
Successfully rebased and updated refs/heads/master.
```

### What is Rebase?
Rebasing moves your local changes **on top of the latest remote changes** instead of merging them. This results in a cleaner commit history.

### Rebase vs Merge

| Method | What It Does | Best Used For |
|--------|-------------|---------------|
| `git merge` | Creates a new merge commit combining both histories | Keeping a full commit history |
| `git rebase` | Moves local commits to start after the latest remote commit | Keeping commit history linear |

Using `git pull --rebase` avoids unnecessary merge commits and makes the history cleaner.

## Step 3: Push Your Changes
After rebasing, your local repository is now updated with the latest remote changes. You can now safely push your changes:

```bash
git push origin master
```



# Ch 13: Checking If Your Local Repository Is Behind the Remote Repository

When working in a team, it's essential to ensure your local repository is **up to date** with the remote repository on GitHub. Sometimes, teammates may push new commits, making your local branch outdated. You can check this using **Git log and Git fetch**.

## 1. Check Your Current Position in Git History

Use the following command to check where your `HEAD` (current branch) is in comparison to the remote repository:
```bash
git log --oneline --decorate --all
```

This command will display:
* The **commit hash** for each commit
* **Branches** (`HEAD`, `master`, `origin/master`, etc.)
* The **current commit HEAD is pointing to**

### Example Output (Up-to-date HEAD)
```bash
60e1e1f (HEAD -> master, origin/master) Resolved Git Conflicts
ac189ab Trying to make a conflict
7a39af2 Learning how to resolve some basic conflicts
7eafe59 Create New File Added On Github, trying to cause a conflict
95b248d Update testing.txt for learning how to pull the changes locally
255c4b4 Cloned folder and new-cloned-branch, testing merge
5644804 (origin/new-branch, new-branch) New Branch File
2e0c154 Created new branch
b63df16 Added testing file to learn unstaging files
d3dedf9 Second Commit
5dbd610 first commit
```

Here, `HEAD` is **up-to-date** with `origin/master`, meaning your local branch matches the latest remote changes.

## 2. Fetch Remote Changes Without Merging

To check if new commits have been added to the remote repository, run:
```bash
git fetch origin master
```

### What Does `git fetch` Do?
* It downloads **new commits** from GitHub **without modifying** your local files
* It updates the **remote tracking branches** (e.g., `origin/master`), but it does not merge them into your working branch

After running `git fetch`, test the log again:
```bash
git log --oneline --graph --decorate --all
```

### Example Output (Local Branch Is Behind)
```bash
* b3d5194 (origin/master) New Commit by TEAM WHICH I DONT HAVE LOCALLY
* 60e1e1f (HEAD -> master) Resolved Git Conflicts # CURRENT LOCAL CODE
* ac189ab Trying to make a conflict
* 7a39af2 Learning how to resolve some basic conflicts
* 7eafe59 Create New File Added On Github, trying to cause a conflict
* 95b248d Update testing.txt for learning how to pull the changes locally
* 255c4b4 Cloned folder and new-cloned-branch, testing merge
* 5644804 (origin/new-branch, new-branch) New Branch File
* 2e0c154 Created new branch
* b63df16 Added testing file to learn unstaging files
* d3dedf9 Second Commit
* 5dbd610 first commit
```

Pulling the changes to my current local repository. 

```bash
(base) japneetsingh@Japneets-MacBook-Pro Git Essentials Udemy % git pull origin master
From github.com:JapneetSinghh/Git-Essentials-
 * branch            master     -> FETCH_HEAD
Updating 60e1e1f..b3d5194
Fast-forward
 gitLogCommandTest.txt | 18 ++++++++++++++++++
 1 file changed, 18 insertions(+)
 create mode 100644 gitLogCommandTest.txt
```
Now my local repository is up to day

```bash
(base) japneetsingh@Japneets-MacBook-Pro Git Essentials Udemy % git log --oneline --graph --decorate --all
* b3d5194 (HEAD -> master, origin/master) New Commit by TEAM WHICH I DONT HAVE LOCALLY   # BUT AFTER PULLING I HAVE IT IN MY LOCAL DIRECTORY
* 60e1e1f Resolved Git Conflicts
* ac189ab Trying to make a conflict
* 7a39af2 Learning how to resolve some basic conflicts
* 7eafe59 Create New File Added On Github, trying to cause a conflict
* 95b248d Update testing.txt for learning how to pull the changes locally
* 255c4b4 Cloned folder and new-cloned-branch, testing merge
* 5644804 (origin/new-branch, new-branch) New Branch File
* 2e0c154 Created new branch
* b63df16 Added testing file to learn unstaging files
* d3dedf9 Second Commit
* 5dbd610 first commit
(base) japneetsingh@Japneets-MacBook-Pro Git Essentials Udemy % 
```


### Understanding the Output:
* **New commit** (`b3d5194`) is present in `origin/master` but not in `HEAD -> master`
* Your **local** `master` branch is now behind the remote branch
* You need to **pull the changes** to bring your local branch up to date

## 3. Pull the Latest Changes to Update Your Local Code

Once you have confirmed that your local branch is behind, pull the latest changes:
```bash
git pull origin master
```

This will **merge the new commits** from `origin/master` into your local `master` branch.

If you want a **cleaner history**, use **rebase** instead:
```bash
git pull origin master --rebase
```

| Command | Purpose |
|---------|----------|
| `git log --oneline --decorate --all` | Check your position in Git history |
| `git fetch origin master` | Fetch remote changes without modifying local files |
| `git log --oneline --graph --decorate --all` | Check if your local branch is behind the remote branch |
| `git pull origin master` | Merge the latest remote changes into your local branch |
| `git pull origin master --rebase` | Rebase local commits on top of the latest remote changes |



# Ch 14: Revisiting an Older Commit and Creating a New Branch

### **1. Finding the Older Commit**

1. Go to your GitHub repository and navigate to the **Commits** section.
2. Copy the SHA hash of the commit you want to revisit (e.g., `255c4b41955c54e8eec26e4a6cf57dcd8bf21537`).
3. In your local repository, check the current commit history using:
   ```bash
   git log --oneline
   ```
4. You will see that `HEAD` is pointing to the most recent commit.

### **2. Checking Out an Older Commit**
To move to the older commit, use:
```bash
git checkout 255c4b41955c54e8eec26e4a6cf57dcd8bf21537
```

#### **Output Example:**
```bash
You are in 'detached HEAD' state. You can look around, make experimental changes
and commit them, and you can discard any commits you make in this state without
impacting any branches by switching back to a branch.

If you want to create a new branch to retain commits you create, you may do so 
by using -c with the switch command. Example:

git switch -c <new-branch-name>

Or undo this operation with:

git switch -

HEAD is now at 255c4b4 Cloned folder and new-cloned-branch
```

Now, `HEAD` is detached, and the working directory contains files from the older commit.

### **3. Creating a New Branch from an Older Commit**
To preserve this older commit and continue working on it:
```bash
git checkout -b going-back-in-time-branch
```

Stage and commit all the files:
```bash
git add -A  # Staging all changes
git commit -m "Starting a new branch from an older commit"
git push -u origin going-back-in-time-branch
```

Now, you have a new branch that contains the code from the older commit.

### **Why is This Useful?**

#### **Scenario 1: Fixing a Bug by Rolling Back Features**
If you're developing a Library Management System and have been committing after each feature, a new feature might introduce a bug. Instead of manually reverting the last three commits, you can create a new branch from the last stable commit and continue from there.

#### **Scenario 2: Restoring a Stable Version After a Major Issue**
Imagine you're working on a web application. After merging a recent feature, the application crashes in production. Instead of debugging in production, you:
1. Identify a stable commit before the faulty update.
2. Run:
   ```bash
   git checkout <commit-SHA>
   git checkout -b stable-fix-branch
   git push -u origin stable-fix-branch
   ```
3. You now have a stable version to hotfix, while the team continues debugging the faulty update in `main`.

This approach ensures minimal disruption while maintaining progress.

---


# Ch 15: Git Stash: Save and Restore Uncommitted Changes

### What is `git stash`?
`git stash` temporarily saves uncommitted changes, allowing you to switch branches or pull updates without committing unfinished work. It helps prevent conflicts when changing branches.

### Scenario: Switching Branches with Uncommitted Changes

#### Problem
You tried to switch from an older commit back to `master`, but Git prevented it because of uncommitted changes:

```bash
git checkout master
```

**Error:**
```bash
error: Your local changes to the following files would be overwritten by checkout:
.DS_Store
Github_Udemy.md
Please commit your changes or stash them before you switch branches.
Aborting
```

#### Solution: Using `git stash`
To temporarily save your changes, run:

```bash
git stash
```

Now you can switch branches without issues:

```bash
git checkout master # or git switch master
```

### Restoring Stashed Changes
Once you're back on the correct branch, restore your saved changes with:

```bash
git stash pop # Applies and removes the last stash
```

If you want to keep the stash but still apply the changes:

```bash
git stash apply # Applies the stash without deleting it
```

### Practical Use Cases of `git stash`
1. **Switching branches with uncommitted work**
   * Saves changes temporarily so you can change branches.
2. **Pulling latest updates without committing**
   * Run `git stash`, then `git pull origin master`, then restore changes.
3. **Experimenting without committing**
   * Save work-in-progress changes and restore later.

## Git Diff: Viewing Changes in Git

### What is `git diff`?
`git diff` shows the differences between changes in your working directory, staging area, and commits. It helps track modifications before committing.

### Basic Usage
1️⃣ **See Unstaged Changes (Working Directory vs. Last Commit)**
```bash
git diff
```
* Shows modifications in files **not staged** for commit.
* Useful before staging files.

2️⃣ **See Staged Changes (Ready for Commit)**
```bash
git diff --staged
```
or
```bash
git diff --cached
```
* Shows changes that have been added (`git add`) but not committed yet.

3️⃣ **See Changes Between Commits**
```bash
git diff commit1 commit2
```
Example:
```bash
git diff 5dbd610 255c4b4
```
* Compares the differences between two commits.

4️⃣ **See Changes in a Specific File**
```bash
git diff filename
```
Example:
```bash
git diff README.md
```
* Shows modifications in a single file.

5️⃣ **See Changes Between Local and Remote Repo**
```bash
git diff origin/master
```
* Checks differences between your local branch and the remote master branch.

### Summary of `git diff` Commands

| Command | Purpose |
|---------|---------|
| `git diff` | Show unstaged changes |
| `git diff --staged` | Show staged changes ready for commit |
| `git diff commit1 commit2` | Compare changes between two commits |
| `git diff filename` | Show changes in a specific file |
| `git diff origin/master` | Compare local branch with remote master |

Use `git diff` to track changes efficiently before committing! 🚀

## Git Ignore (`.gitignore`) - Excluding Files from Git Tracking

### What is `.gitignore`?
The `.gitignore` file tells Git **which files and directories to ignore** from version control. It prevents unnecessary or sensitive files from being committed, such as:
* Logs (`.log` files)
* Compiled binaries (`.exe`, `.class`)
* Environment variables (`.env`)
* Temporary files (`.tmp`, `.DS_Store`)
* Dependency folders (`node_modules/`, `vendor/`)

### Example `.gitignore` File

```bash
# Ignore system files
.DS_Store
Thumbs.db

# Ignore log files
*.log

# Ignore compiled binaries
*.exe
*.class

# Ignore environment variables
.env

# Ignore dependency folders
node_modules/
vendor/
```

# Ch 16: Creating Git Aliases to Save Time

### Why Use Git Aliases?
Git aliases help **shorten long commands** by allowing you to assign custom shortcuts for frequently used Git commands.

### How to Create a Git Alias
1. Open your **global Git configuration file** (`.gitconfig`):

   **For Mac/Linux**:
   ```bash
   code ~/.gitconfig # Open in VS Code
   nano ~/.gitconfig # Open in Nano editor
   ```
   
   **For Windows**:
   ```powershell
   notepad C:\Users\YourUsername\.gitconfig
   ```

2. Add aliases inside the `[alias]` section:
   ```ini
   [alias]
     st = status
     co = checkout
     lgfav = log --oneline --decorate --graph --all
     lg = log --topo-order --all --graph --date=local --pretty=format:'%C(green)%h%C(reset) %><(55,trunc)%s%C(red)%d%C(reset) %C(blue)[%an]%C(reset) %C(yellow)%ad%C(reset)%n'
   ```

3. **Save the file** and exit the editor.

### Using the Aliases
Now, instead of typing long commands, you can simply use:
```bash
git st      # Short for git status
git co      # Short for git checkout
git lgfav   # Short for git log --oneline --decorate --graph --all
git lg      # Custom detailed Git log format
```

### Checking Existing Aliases
To see all configured aliases, run:
```bash
git config --global --list | grep alias
```


# Ch 17: Changing Commit Message in Git

Many times, we make mistakes while committing changes and write an incorrect commit message.

For example:
```bash
git commit -m "INCORRECT COMMIT MESSAGE"

use git log --oneline  # see the current commit message
```

## Editing the Commit Message
To edit the commit message, use:

```bash
git commit --amend
```

This will open the **Vim** or **Nano** text editor in the terminal.

### Editing in Vim
If **Vim** opens:
1. Press `i` to enter **Insert Mode**.
2. Update the commit message.
3. Press `Esc` to exit **Insert Mode**.
4. Type `:wq` and press **Enter** to save and exit.
   * If you get an error with `:wq`, use `:wq!` to force save and exit.

### Switching to Nano (If Vim Doesn't Work)
If **Vim** doesn't work or you prefer **Nano**, set Nano as the default editor:

```bash
git config --global core.editor "nano"
```

Now, running `git commit --amend` will open **Nano** instead.

### Editing in Nano
1. Update the commit message directly.
2. Press `Ctrl + X` to exit.
3. Press `Y` to confirm changes.
4. Press **Enter** to save and close.

Now try command 

```bash 
git log --oneline
```

It will show you the updated commit message


# Ch 18: How to Reset a Commit in Git  

Commits can be reset in **two ways**:  
1. **Soft Reset**  
2. **Hard Reset** 

---

## **1️⃣ Soft Reset**  

### **What is a Soft Reset?**  
A **soft reset** in Git moves the `HEAD` pointer to an earlier commit **without deleting any changes**. The changes remain **staged** (ready to commit again). It is useful when you want to update the last commit message or make minor changes before committing again.  

**Common Use Cases:**  
- Fixing an incorrect commit message  
- Undoing a commit while keeping the changes staged  
- Removing an accidental commit without losing work  

---

### **2️⃣ Example of a Soft Reset**  

#### **Step 1: Create an Incorrect Commit**  
```bash
git commit -m "SOFT RESET COMMIT"
```

#### **Step 2: Check Commit History**
```bash
git log --oneline
```

Example output:
```
572d5f6 (HEAD -> master) SOFT RESET COMMIT
34b55ce (origin/master) Updating this commit name using git commit --amend
4200e94 Conflict resolved using rebase
33baac7 Create merge-conflict.txt file for causing a conflict
dd9fb21 Merge pull request #3 from JapneetSinghh/Different-Folder-Mac
...
```

### **3️⃣ Deleting a Commit Without Losing Work (Soft Reset)**
To **remove commit** `572d5f6` but keep the work:

**Option 1: Using** `HEAD~1`
```bash
git reset --soft HEAD~1
```
This **moves** `HEAD` to the previous commit while keeping the changes **staged**.

**Option 2: Using Commit Hash**
```bash
git reset --soft 572d5f6^
```
This does the same thing but explicitly targets commit `572d5f6`.

### **4️⃣ Verify Commit is Deleted**
Run:
```bash
git log --oneline
```

Now the commit should be gone:
```
34b55ce (HEAD -> master, origin/master) Updating this commit name using git commit --amend
4200e94 Conflict resolved using rebase
33baac7 Create merge-conflict.txt file for causing a conflict
dd9fb21 Merge pull request #3 from JapneetSinghh/Different-Folder-Mac
...
```

✅ **Commit is deleted, but work is still present in the staging area!**


# 2️⃣ Hard Reset in Git  

## **What is a Hard Reset?**  
A **hard reset** in Git moves `HEAD` to a previous commit and **permanently removes all changes** from the working directory and staging area.  

### **When to Use It?**  
- When you want to **completely delete** the last commit and its changes.  
- When you want to **reset your repository** to a clean state.  
- When you made a mistake and need a **fresh start**.  

🚨 **Be Careful!**  
- **Hard reset erases commits and cannot be undone easily**.  
- If you already pushed the commit to GitHub, you may need to **force push** (`git push --force`).  

---

## **Step-by-Step Guide to Hard Reset**  

### **1️⃣ Create a Dummy File and Commit It**  
```bash
echo "This is a test file" > dummy.txt
git status  
git add -A  
git commit -m "HARD RESET THIS"  
```

### **2️⃣ Check Commit History**
```bash
git log --oneline
```

Example output:
```
33dae8a (HEAD -> master) Hard reset this commit # WILL HARD RESET THIS
c67e451 (origin/master) Soft reset
34b55ce Updating this commit name using git commit --amend
4200e94 Conflict resolved using rebase
33baac7 Create merge-conflict.txt file for causing a conflict
dd9fb21 Merge pull request #3 from JapneetSinghh/Different-Folder-Mac
......
```

### **3️⃣ Perform a Hard Reset**
**Option 1: Reset to One Commit Before** (`HEAD~1`)
```bash
git reset --hard HEAD~1
```
This removes the last commit and deletes all associated changes.

**Option 2: Reset to a Specific Commit (e.g.,** `33dae8a`)
```bash
git reset --hard 33dae8a
```
This resets the repository to `33dae8a` and removes all commits after it.

### **4️⃣ Verify That the Reset Worked**
Check commit history again:
```bash
git log --oneline
```

Now, `33dae8a` is **gone**, and `HEAD` moved back to `c67e451`:
```
c67e451 (HEAD -> master, origin/master) Soft reset
34b55ce Updating this commit name using git commit --amend
4200e94 Conflict resolved using rebase
33baac7 Create merge-conflict.txt file for causing a conflict
dd9fb21 Merge pull request #3 from JapneetSinghh/Different-Folder-Mac
......
```

✅ **Commit and all new work are permanently deleted!**

## **When to Use Hard Reset vs. Soft Reset?**

| Reset Type | Removes Commits? | Keeps Staged Changes? | Keeps Working Directory Changes? | When to Use? |
|------------|------------------|----------------------|----------------------------------|-------------|
| `git reset --soft` | ✅ Yes | ✅ Yes | ✅ Yes | Modify the last commit message or make small changes before recommitting. |
| `git reset --hard` | ✅ Yes | ❌ No | ❌ No | Start fresh by removing all local commits and changes permanently. |


# Ch 19: How to Delete a Commit Even After It Is Pushed  

Sometimes, we **accidentally push a commit** that we later realize should not be in the repository. In such cases, we can **delete the commit permanently** using `git reset` and `git push --force`.  

---

## **Creating a Commit (Example Scenario)**
First, let's create a commit that we want to delete:

```bash
git commit -m "I will delete this commit"
```

Output:

```
[master 1f16d29] I will delete this commit
1 file changed, 5 insertions(+), 1 deletion(-)
```

Now, push the commit to GitHub:

```bash
git push origin master
```

Output:

```
To github.com:JapneetSinghh/Git-Essentials-.git
7f55a94..1f16d29 master -> master
```

Check commit history:

```bash
git log --oneline
```

Example output:

```
1f16d29 (HEAD -> master, origin/master) I will delete this commit
7f55a94 Hard Reset
c67e451 Soft reset
34b55ce Updating this commit name using git commit --amend
```

**Now, we need to delete** `1f16d29` permanently!

## **Deleting the Last Pushed Commit (Using Hard Reset)**

### **Step 1: Reset to the Previous Commit**
To **delete the last commit and remove its changes**, run:

```bash
git reset --hard 7f55a94
```

This moves `HEAD` back to `7f55a94`, **removing commit** `1f16d29` and its changes completely.

### **Step 2: Force Push the Reset**
Since we already pushed `1f16d29` to GitHub, we need to **force push** the reset:

```bash
git push origin master --force
```

**Warning:**
* `--force` will **overwrite history on GitHub**, so be careful.
* If working in a **team**, ensure that no one else has pulled the commit before doing this.

## **Verifying That the Commit is Deleted**
Now, check the commit history:

```bash
git log --oneline
```

Example output:

```
7f55a94 (HEAD -> master) Hard Reset
c67e451 Soft reset
34b55ce Updating this commit name using git commit --amend
```

**The commit** `1f16d29` is now gone!

## **Alternative: Undo a Commit Without Deleting Changes**
If you want to **undo a commit but keep the changes**, use:

```bash
git reset --soft HEAD~1
git push origin master --force
```

This will **remove the commit** but keep the files staged.


# Ch 20: Git Revert: Undoing Commits Safely  

## **What is `git revert`?**  
`git revert` is a **safe way to undo a commit** by creating a **new commit that reverses changes** from a previous commit. Unlike `git reset`, it **does not remove commits from history**, making it ideal for **team collaboration** and shared repositories.  

---

## **When to Use `git revert`?**  
- When you **want to undo a commit without rewriting Git history**.  
- When working in **a shared repository** and need to **preserve commit history**.  
- When a **mistake was committed and pushed**, and you need to reverse it.  
- When you **want to undo a specific commit** without affecting later commits.  

---

## **What to Take Care of?**  
- `git revert` **does not delete commits**, it creates **a new commit that negates changes**.  
- If the commit you're reverting **affects multiple files**, you may need to manually resolve conflicts.  
- If you revert a commit that was **already pushed**, you still need to `git push` the new revert commit.  

---

## **Usage Examples**  

### **Reverting the Last Commit**
If the most recent commit (`HEAD`) is incorrect, **revert it**:
```bash
git revert HEAD
```

This opens a text editor (Nano or Vim) to confirm the revert commit message.
* **Press** `CTRL + X → Y → Enter` (Nano) or `:wq` (Vim) to save and exit.
* A **new commit is created that undoes the previous commit**.

**Before Revert** (`git log --oneline`):

```
abc1234 (HEAD -> master) Bad commit ❌
def5678 Fixed login issue
ghi9101 Added README
```

**After Revert** (`git log --oneline`):

```
xyz9999 (HEAD -> master) Revert "Bad commit"
abc1234 Bad commit
def5678 Fixed login issue
```

**Commit is undone without removing history!**

### **Reverting a Specific Commit**
To **undo a commit that is not the latest one**, find its hash:

```bash
git log --oneline
```

Example output:

```
abc1234 Bad commit ❌ (We want to undo this)
def5678 Fixed login issue
ghi9101 Added README
```

Run:

```bash
git revert abc1234
```

This **reverts only that commit**, leaving the rest of the commits unchanged.

### **Reverting Multiple Commits**
To **undo multiple commits**, use:

```bash
git revert HEAD~3..HEAD
```

This reverts the last **three commits separately**.

To **undo multiple commits in one revert commit**, use:

```bash
git revert --no-commit HEAD~3..HEAD
git commit -m "Reverted last 3 commits"
```

### **Handling Revert Conflicts**
If `git revert` causes conflicts:
1. **Fix conflicts manually** in affected files.
2. **Stage the fixed files**:

```bash
git add .
```

3. **Continue the revert**:

```bash
git revert --continue
```

### **Reverting a Commit That Was Pushed**
If the commit is **already pushed to GitHub**, use:

```bash
git revert HEAD
git push origin master
```

This **safely updates the repository without rewriting history**.

## **Comparison: `git revert` vs. `git reset`**

| Feature | `git revert` | `git reset` |
|---------|-------------|------------|
| **Purpose** | Creates a new commit that undoes changes | Moves HEAD back to a previous commit |
| **Deletes Commit?** | No (keeps history intact) | Yes (removes commits) |
| **Safe for Teams?** | Yes | No (`--hard` is destructive) |
| **Requires Force Push?** | No | Yes (`git push --force`) |
| **Reverts a Specific Commit?** | Yes | No, resets everything after that commit |


# Ch 21: Understanding `git rebase` in Git 

## **What is `git rebase`?** 
`git rebase` is a Git command used to **move or replay commits on top of another branch**. Instead of merging branches (which creates a merge commit), `rebase` **rewrites commit history** by applying changes one by one on top of the latest commit of another branch. 

--- 

## **When to Use `git rebase`?** 

✅ **Use `git rebase` when:** 
- You want a **clean, linear commit history** (without unnecessary merge commits). 
- You need to **update your feature branch with the latest changes from `main/master`** before merging. 
- You are working **alone** and want to keep your commits tidy. 

❌ **Avoid `git rebase` when:** 
- You are working on a **shared branch** and others have already pulled your changes. 
- You don't want to **rewrite commit history** (use `git merge` instead). 
- Your branch is already merged or has important commits that should not be altered. 

---

# Fixing Rebase Conflicts in Git  

## **What is Git Rebase?**  
`git rebase` is a Git command used to **move or replay commits** on top of another branch. It helps in keeping a **linear commit history** by applying changes one by one instead of merging.

### **Example: Before and After Rebasing**
Before rebasing:

```
* 694afda Rebase conflict from master branch (HEAD -> master)
| |
* c785a54 Rebase Conflict (origin/rebase-branch, rebase-branch)
|/
|
* 4af3773 Conflict resolved (origin/master)
|\
| |
| * 99cb87d Create MergeConflcit.txt
| |
* | 873857b Causing a conflict
|/
|
* 0839405 Updated Readme.md
```

After successful rebasing:

```
* cd89855 Rebase conflict from master branch (HEAD -> master)
|
* c785a54 Rebase Conflict (origin/rebase-branch, rebase-branch)
|
* 4af3773 Conflict resolved (origin/master)
|\
| |
| * 99cb87d Create MergeConflcit.txt
| |
* | 873857b Causing a conflict
|/
|
* 0839405 Updated Readme.md
```

✅ **History becomes linear, making commits easier to track!** 

--- 

## **How to Fix Rebase Conflicts** 

### **1. Rebase the Master Branch Onto rebase-branch** 
```bash
git checkout master
git rebase rebase-branch
```

🚨 **Error Message:**

```
Auto-merging Rebase-conflict.txt
CONFLICT (add/add): Merge conflict in Rebase-conflict.txt
error: could not apply 694afda... Rebase conflict from master branch
```

This happens because `Rebase-conflict.txt` exists in both branches with different changes.

### **2. Check the Rebase Status**

```bash
git status
```

Output:

```
interactive rebase in progress; onto c785a54
Last command done (1 command done):
   pick 694afda Rebase conflict from master branch
No commands remaining.
You are currently rebasing branch 'master' on 'c785a54'.
  (fix conflicts and then run "git rebase --continue")
  (use "git rebase --skip" to skip this patch)
  (use "git rebase --abort" to check out the original branch)

Unmerged paths:
  (use "git add <file>..." to mark resolution)
        both added:      Rebase-conflict.txt
```

✅ **This tells us the conflict is in** `Rebase-conflict.txt`.

### **3. Open the Conflicted File**

```
<<<<<<< HEAD
Rebase conflict from master branch 1
Rebase conflict from master branch 2
Rebase conflict from master branch 3
=======
Rebase conflict from rebase branch 1
Rebase conflict from rebase branch 4
Rebase conflict from rebase branch 5
>>>>>>> rebase-branch
```

* **Everything between** `<<<<<<< HEAD` and `=======` is from `master`.
* **Everything between** `=======` and `>>>>>>> rebase-branch` is from `rebase-branch`.

### **4. Resolve the Conflict Manually**
Edit the file to keep the correct version and remove the conflict markers:

```
Rebase conflict from master branch 1
Rebase conflict from master branch 2
Rebase conflict from rebase branch 4
Rebase conflict from rebase branch 5
```

### **5. Mark the Conflict as Resolved**

```bash
git add Rebase-conflict.txt
git rebase --continue
```

✅ **If there are no more conflicts, the rebase completes successfully!**

### **6. Verify the Rebase**

```bash
git log --oneline --graph --decorate --all
```

✅ The commit history is now rewritten with a clean linear structure.

### **Alternative: If You Want to Abort the Rebase**
If you want to **cancel the rebase** and return to the previous state:

```bash
git rebase --abort
```

✅ **This resets your branch to the state before the rebase started.**


# Ch 22: Git Stash: Save Work Without Committing  

## **What is `git stash`?**  
`git stash` temporarily saves **uncommitted changes** so you can switch branches without losing work.  
It **clears the working directory** while allowing you to reapply changes later.

---

## **When & Where to Use `git stash`?**  
- When you need to **switch branches** but don't want to commit incomplete work.  
- When working on **multiple features** and need to **pause** one.  
- Before pulling updates to **avoid merge conflicts**.  

Don't use it for **long-term storage**—commits are safer.

---

## **How to Use `git stash`**
### **Save Your Work**
```bash
git stash
```

This **saves** all **uncommitted** changes.

### **View Stashed Changes**
```bash
git stash list
```

Output:
```
stash@{0}: WIP on feature-branch: abc1234 Added new feature
stash@{1}: WIP on master: xyz5678 Updated README
```

### **Reapply Stashed Changes**
```bash
git stash apply
```
Reapplies the **most recent stash** but **keeps it in the stash list**.

```bash
git stash pop
```
Reapplies the **most recent stash** and **removes it from the stash list**.

### **Apply a Specific Stash**
```bash
git stash apply stash@{1}
```
Reapplies an **older stash**.

### **Remove a Stash**
```bash
git stash drop stash@{0}
```
Deletes a specific stash.

```bash
git stash clear
```
**Removes all stashes**.

### **Summary of Commands**
```bash
git stash            # Save uncommitted changes
git stash list       # View saved stashes
git stash apply      # Reapply most recent stash
git stash pop        # Reapply & remove most recent stash
git stash drop stash@{0}  # Delete a specific stash
git stash clear      # Delete all stashes
<<<<<<< HEAD
=======
```# Complete Git Setup and Usage Guide
## By Japneet Singh

# Git Installation and Setup Guide - Index

## Table of Contents
- [Chapter 1: Git Installation and SSH Setup Guide](#ch-1-git-installation-and-ssh-setup-guide)
  - [Installing Git on Different Operating Systems](#installing-git-on-different-operating-systems)
  - [Initial Git Configuration](#initial-git-configuration)
- [Chapter 2: SSH Key Setup](#ch-2-ssh-key-setup)
  - [Generating SSH Key](#1-generating-ssh-key)
  - [Adding SSH Key to GitHub](#2-adding-ssh-key-to-github)
- [Chapter 3: What is Cloning in Git?](#ch-3-what-is-cloning-in-git)
  - [How to Clone a Git Repository](#how-to-clone-a-git-repository)
- [Chapter 4: Git Log Command Guide](#ch-4-git-log-command-guide)
  - [Overview and Basic Usage](#overview)
  - [Common Options](#common-options)
  - [Tips for Using Git Log](#tips)
---

# Ch 1: Git Installation and SSH Setup Guide

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

# Ch 2: SSH Key Setup
## 1. Generating SSH  Key
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

## 2. Adding SSH Key to GitHub

1. Copy your public key (the output from `cat ~/.ssh/id_ed25519.pub`)
2. Go to GitHub Settings
3. Navigate to "SSH and GPG keys"
4. Click "New SSH key"
5. Give your key a title
6. Paste your public key
7. Click "Add SSH key"

You're now ready to use Git with GitHub securely via SSH!

# Ch 3: What is Cloning in Git?

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





# Ch 4: Git Log Command Guide

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


# Ch 5: How to Create a New Git Repository

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


# Ch 6: How to Create a New Git Repository and Push Code to GitHub

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

# Ch 7: Making Changes and Pushing to GitHub Repository

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



# Ch 8: How to Undo and Unstage Changes in Git

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

# Ch 9: Git can help to bring back a deleted file using git checkout command

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



# Ch 10: Understanding Git Origins and Using git remote -v

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



# Ch 11: Branching in git
## How to Create a New Branch in Git

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


# Working with a Team in Git

When working on a team project, you often need to collaborate by cloning a teammate's repository, creating a new branch, making changes, and merging it back.

## 1. Clone the Repository

First, clone the repository from GitHub to your local machine:
```bash
git clone git@github.com:JapneetSinghh/Git-Essentials-.git
```

Navigate to the cloned directory:
```bash
cd Git-Essentials-
```

Check the remote origin:
```bash
git remote -v
```

## 2. Create and Work on a New Branch

Create and switch to a new branch:
```bash
git checkout -b new-cloned-branch
```

Verify the branch:
```bash
git branch
```

Make changes to files and folders, then stage the changes:
```bash
git add -A
```

Commit the changes:
```bash
git commit -m "Cloned folder and new-cloned-branch, testing merge"
```

Push the new branch to GitHub:
```bash
git push origin new-cloned-branch
```

## 3. Merge the New Branch into Master

Switch back to the `master` branch:
```bash
git checkout master
```

Pull the latest updates from GitHub to ensure `master` is up-to-date:
```bash
git pull origin master
```

Merge `new-cloned-branch` into `master`:
```bash
git merge new-cloned-branch
```

Push the updated `master` branch to GitHub:
```bash
git push origin master
```

## Git Team Workflow with Comments

```bash
# Clone the repository from GitHub
git clone git@github.com:JapneetSinghh/Git-Essentials-.git

# Navigate into the cloned repository
cd Git-Essentials-

# Create and switch to a new branch
git checkout -b new-cloned-branch

# Stage all changes (new, modified, deleted files)
git add -A

# Commit the changes with a message
git commit -m "Cloned folder and new-cloned-branch, testing merge"

# Push the new branch to GitHub
git push origin new-cloned-branch

# Switch back to the master branch
git checkout master

# Pull the latest changes from the remote master branch to keep it up-to-date
git pull origin master

# Merge the new branch into master
git merge new-cloned-branch

# Push the updated master branch to GitHub
git push origin master
```



# How to Pull Changes from the Master Branch

When working in a team, if a teammate has made changes to the `master` branch on GitHub, you need to update your local repository to reflect those changes.

## **Pulling Changes from Master**
Use the following command to pull the latest updates from the `master` branch:
```bash
git pull origin master
```

This will:

Fetch the latest changes from GitHub.

Merge them into your local master branch.

Update your local directory with the latest files and modifications.


# Ch 12: Handling Push Rejections Due to Remote Changes

## Scenario
A teammate has added new files and committed changes to the `master` branch on GitHub.  
You also made local changes and tried to push them, but your push was **rejected** because your local repository is outdated.

## Why Does This Happen?
Git prevents you from pushing because your local branch does not contain the latest changes from the remote repository. To resolve this, you need to **pull** the latest updates first.

## Error: Push Rejected
When you try to push, you might see the following error:

```bash
(base) japneetsingh@Japneets-MacBook-Pro Git Essentials Udemy % git push origin master
To github.com:JapneetSinghh/Git-Essentials-.git
 ! [rejected]        master -> master (fetch first)
error: failed to push some refs to 'github.com:JapneetSinghh/Git-Essentials-.git'
hint: Updates were rejected because the remote contains work that you do not
hint: have locally. This is usually caused by another repository pushing to
hint: the same ref. If you want to integrate the remote changes, use
hint: 'git pull' before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
```

This means your local `master` branch is **outdated** compared to the remote `master` branch on GitHub.

## Step 1: Pull the Latest Changes
To update your local repository with the latest changes from GitHub, run:

```bash
git pull origin master
```

However, sometimes this may result in another error:

### Error: Divergent Branches
You may get the following error when pulling:

```bash
(base) japneetsingh@Japneets-MacBook-Pro Git Essentials Udemy % git pull origin master
From github.com:JapneetSinghh/Git-Essentials-
 * branch master -> FETCH_HEAD
 7eafe59..7a39af2 master -> origin/master
hint: You have divergent branches and need to specify how to reconcile them.
hint: You can do so by running one of the following commands sometime before
hint: your next pull:
hint:
hint: git config pull.rebase false # merge
hint: git config pull.rebase true # rebase
hint: git config pull.ff only # fast-forward only
fatal: Need to specify how to reconcile divergent branches.
```

### Why Did I Get This Error?
This happens because **your local branch and the remote branch have different commits that Git cannot automatically merge**. Git needs to know how you want to combine these changes.

## Step 2: Use Rebase to Fix the Issue
To resolve the divergence and apply your changes on top of the latest remote changes, use:

```bash
git pull origin master --rebase
```

**Example Output:**
```bash
From github.com:JapneetSinghh/Git-Essentials-
 * branch master -> FETCH_HEAD
Successfully rebased and updated refs/heads/master.
```

### What is Rebase?
Rebasing moves your local changes **on top of the latest remote changes** instead of merging them. This results in a cleaner commit history.

### Rebase vs Merge

| Method | What It Does | Best Used For |
|--------|-------------|---------------|
| `git merge` | Creates a new merge commit combining both histories | Keeping a full commit history |
| `git rebase` | Moves local commits to start after the latest remote commit | Keeping commit history linear |

Using `git pull --rebase` avoids unnecessary merge commits and makes the history cleaner.

## Step 3: Push Your Changes
After rebasing, your local repository is now updated with the latest remote changes. You can now safely push your changes:

```bash
git push origin master
```



# Ch 13: Checking If Your Local Repository Is Behind the Remote Repository

When working in a team, it's essential to ensure your local repository is **up to date** with the remote repository on GitHub. Sometimes, teammates may push new commits, making your local branch outdated. You can check this using **Git log and Git fetch**.

## 1. Check Your Current Position in Git History

Use the following command to check where your `HEAD` (current branch) is in comparison to the remote repository:
```bash
git log --oneline --decorate --all
```

This command will display:
* The **commit hash** for each commit
* **Branches** (`HEAD`, `master`, `origin/master`, etc.)
* The **current commit HEAD is pointing to**

### Example Output (Up-to-date HEAD)
```bash
60e1e1f (HEAD -> master, origin/master) Resolved Git Conflicts
ac189ab Trying to make a conflict
7a39af2 Learning how to resolve some basic conflicts
7eafe59 Create New File Added On Github, trying to cause a conflict
95b248d Update testing.txt for learning how to pull the changes locally
255c4b4 Cloned folder and new-cloned-branch, testing merge
5644804 (origin/new-branch, new-branch) New Branch File
2e0c154 Created new branch
b63df16 Added testing file to learn unstaging files
d3dedf9 Second Commit
5dbd610 first commit
```

Here, `HEAD` is **up-to-date** with `origin/master`, meaning your local branch matches the latest remote changes.

## 2. Fetch Remote Changes Without Merging

To check if new commits have been added to the remote repository, run:
```bash
git fetch origin master
```

### What Does `git fetch` Do?
* It downloads **new commits** from GitHub **without modifying** your local files
* It updates the **remote tracking branches** (e.g., `origin/master`), but it does not merge them into your working branch

After running `git fetch`, test the log again:
```bash
git log --oneline --graph --decorate --all
```

### Example Output (Local Branch Is Behind)
```bash
* b3d5194 (origin/master) New Commit by TEAM WHICH I DONT HAVE LOCALLY
* 60e1e1f (HEAD -> master) Resolved Git Conflicts # CURRENT LOCAL CODE
* ac189ab Trying to make a conflict
* 7a39af2 Learning how to resolve some basic conflicts
* 7eafe59 Create New File Added On Github, trying to cause a conflict
* 95b248d Update testing.txt for learning how to pull the changes locally
* 255c4b4 Cloned folder and new-cloned-branch, testing merge
* 5644804 (origin/new-branch, new-branch) New Branch File
* 2e0c154 Created new branch
* b63df16 Added testing file to learn unstaging files
* d3dedf9 Second Commit
* 5dbd610 first commit
```

Pulling the changes to my current local repository. 

```bash
(base) japneetsingh@Japneets-MacBook-Pro Git Essentials Udemy % git pull origin master
From github.com:JapneetSinghh/Git-Essentials-
 * branch            master     -> FETCH_HEAD
Updating 60e1e1f..b3d5194
Fast-forward
 gitLogCommandTest.txt | 18 ++++++++++++++++++
 1 file changed, 18 insertions(+)
 create mode 100644 gitLogCommandTest.txt
```
Now my local repository is up to day

```bash
(base) japneetsingh@Japneets-MacBook-Pro Git Essentials Udemy % git log --oneline --graph --decorate --all
* b3d5194 (HEAD -> master, origin/master) New Commit by TEAM WHICH I DONT HAVE LOCALLY   # BUT AFTER PULLING I HAVE IT IN MY LOCAL DIRECTORY
* 60e1e1f Resolved Git Conflicts
* ac189ab Trying to make a conflict
* 7a39af2 Learning how to resolve some basic conflicts
* 7eafe59 Create New File Added On Github, trying to cause a conflict
* 95b248d Update testing.txt for learning how to pull the changes locally
* 255c4b4 Cloned folder and new-cloned-branch, testing merge
* 5644804 (origin/new-branch, new-branch) New Branch File
* 2e0c154 Created new branch
* b63df16 Added testing file to learn unstaging files
* d3dedf9 Second Commit
* 5dbd610 first commit
(base) japneetsingh@Japneets-MacBook-Pro Git Essentials Udemy % 
```


### Understanding the Output:
* **New commit** (`b3d5194`) is present in `origin/master` but not in `HEAD -> master`
* Your **local** `master` branch is now behind the remote branch
* You need to **pull the changes** to bring your local branch up to date

## 3. Pull the Latest Changes to Update Your Local Code

Once you have confirmed that your local branch is behind, pull the latest changes:
```bash
git pull origin master
```

This will **merge the new commits** from `origin/master` into your local `master` branch.

If you want a **cleaner history**, use **rebase** instead:
```bash
git pull origin master --rebase
```

| Command | Purpose |
|---------|----------|
| `git log --oneline --decorate --all` | Check your position in Git history |
| `git fetch origin master` | Fetch remote changes without modifying local files |
| `git log --oneline --graph --decorate --all` | Check if your local branch is behind the remote branch |
| `git pull origin master` | Merge the latest remote changes into your local branch |
| `git pull origin master --rebase` | Rebase local commits on top of the latest remote changes |



# Ch 14: Revisiting an Older Commit and Creating a New Branch

### **1. Finding the Older Commit**

1. Go to your GitHub repository and navigate to the **Commits** section.
2. Copy the SHA hash of the commit you want to revisit (e.g., `255c4b41955c54e8eec26e4a6cf57dcd8bf21537`).
3. In your local repository, check the current commit history using:
   ```bash
   git log --oneline
   ```
4. You will see that `HEAD` is pointing to the most recent commit.

### **2. Checking Out an Older Commit**
To move to the older commit, use:
```bash
git checkout 255c4b41955c54e8eec26e4a6cf57dcd8bf21537
```

#### **Output Example:**
```bash
You are in 'detached HEAD' state. You can look around, make experimental changes
and commit them, and you can discard any commits you make in this state without
impacting any branches by switching back to a branch.

If you want to create a new branch to retain commits you create, you may do so 
by using -c with the switch command. Example:

git switch -c <new-branch-name>

Or undo this operation with:

git switch -

HEAD is now at 255c4b4 Cloned folder and new-cloned-branch
```

Now, `HEAD` is detached, and the working directory contains files from the older commit.

### **3. Creating a New Branch from an Older Commit**
To preserve this older commit and continue working on it:
```bash
git checkout -b going-back-in-time-branch
```

Stage and commit all the files:
```bash
git add -A  # Staging all changes
git commit -m "Starting a new branch from an older commit"
git push -u origin going-back-in-time-branch
```

Now, you have a new branch that contains the code from the older commit.

### **Why is This Useful?**

#### **Scenario 1: Fixing a Bug by Rolling Back Features**
If you're developing a Library Management System and have been committing after each feature, a new feature might introduce a bug. Instead of manually reverting the last three commits, you can create a new branch from the last stable commit and continue from there.

#### **Scenario 2: Restoring a Stable Version After a Major Issue**
Imagine you're working on a web application. After merging a recent feature, the application crashes in production. Instead of debugging in production, you:
1. Identify a stable commit before the faulty update.
2. Run:
   ```bash
   git checkout <commit-SHA>
   git checkout -b stable-fix-branch
   git push -u origin stable-fix-branch
   ```
3. You now have a stable version to hotfix, while the team continues debugging the faulty update in `main`.

This approach ensures minimal disruption while maintaining progress.

---


# Ch 15: Git Stash: Save and Restore Uncommitted Changes

### What is `git stash`?
`git stash` temporarily saves uncommitted changes, allowing you to switch branches or pull updates without committing unfinished work. It helps prevent conflicts when changing branches.

### Scenario: Switching Branches with Uncommitted Changes

#### Problem
You tried to switch from an older commit back to `master`, but Git prevented it because of uncommitted changes:

```bash
git checkout master
```

**Error:**
```bash
error: Your local changes to the following files would be overwritten by checkout:
.DS_Store
Github_Udemy.md
Please commit your changes or stash them before you switch branches.
Aborting
```

#### Solution: Using `git stash`
To temporarily save your changes, run:

```bash
git stash
```

Now you can switch branches without issues:

```bash
git checkout master # or git switch master
```

### Restoring Stashed Changes
Once you're back on the correct branch, restore your saved changes with:

```bash
git stash pop # Applies and removes the last stash
```

If you want to keep the stash but still apply the changes:

```bash
git stash apply # Applies the stash without deleting it
```

### Practical Use Cases of `git stash`
1. **Switching branches with uncommitted work**
   * Saves changes temporarily so you can change branches.
2. **Pulling latest updates without committing**
   * Run `git stash`, then `git pull origin master`, then restore changes.
3. **Experimenting without committing**
   * Save work-in-progress changes and restore later.

## Git Diff: Viewing Changes in Git

### What is `git diff`?
`git diff` shows the differences between changes in your working directory, staging area, and commits. It helps track modifications before committing.

### Basic Usage
1️⃣ **See Unstaged Changes (Working Directory vs. Last Commit)**
```bash
git diff
```
* Shows modifications in files **not staged** for commit.
* Useful before staging files.

2️⃣ **See Staged Changes (Ready for Commit)**
```bash
git diff --staged
```
or
```bash
git diff --cached
```
* Shows changes that have been added (`git add`) but not committed yet.

3️⃣ **See Changes Between Commits**
```bash
git diff commit1 commit2
```
Example:
```bash
git diff 5dbd610 255c4b4
```
* Compares the differences between two commits.

4️⃣ **See Changes in a Specific File**
```bash
git diff filename
```
Example:
```bash
git diff README.md
```
* Shows modifications in a single file.

5️⃣ **See Changes Between Local and Remote Repo**
```bash
git diff origin/master
```
* Checks differences between your local branch and the remote master branch.

### Summary of `git diff` Commands

| Command | Purpose |
|---------|---------|
| `git diff` | Show unstaged changes |
| `git diff --staged` | Show staged changes ready for commit |
| `git diff commit1 commit2` | Compare changes between two commits |
| `git diff filename` | Show changes in a specific file |
| `git diff origin/master` | Compare local branch with remote master |

Use `git diff` to track changes efficiently before committing! 🚀

## Git Ignore (`.gitignore`) - Excluding Files from Git Tracking

### What is `.gitignore`?
The `.gitignore` file tells Git **which files and directories to ignore** from version control. It prevents unnecessary or sensitive files from being committed, such as:
* Logs (`.log` files)
* Compiled binaries (`.exe`, `.class`)
* Environment variables (`.env`)
* Temporary files (`.tmp`, `.DS_Store`)
* Dependency folders (`node_modules/`, `vendor/`)

### Example `.gitignore` File

```bash
# Ignore system files
.DS_Store
Thumbs.db

# Ignore log files
*.log

# Ignore compiled binaries
*.exe
*.class

# Ignore environment variables
.env

# Ignore dependency folders
node_modules/
vendor/
```

# Ch 16: Creating Git Aliases to Save Time

### Why Use Git Aliases?
Git aliases help **shorten long commands** by allowing you to assign custom shortcuts for frequently used Git commands.

### How to Create a Git Alias
1. Open your **global Git configuration file** (`.gitconfig`):

   **For Mac/Linux**:
   ```bash
   code ~/.gitconfig # Open in VS Code
   nano ~/.gitconfig # Open in Nano editor
   ```
   
   **For Windows**:
   ```powershell
   notepad C:\Users\YourUsername\.gitconfig
   ```

2. Add aliases inside the `[alias]` section:
   ```ini
   [alias]
     st = status
     co = checkout
     lgfav = log --oneline --decorate --graph --all
     lg = log --topo-order --all --graph --date=local --pretty=format:'%C(green)%h%C(reset) %><(55,trunc)%s%C(red)%d%C(reset) %C(blue)[%an]%C(reset) %C(yellow)%ad%C(reset)%n'
   ```

3. **Save the file** and exit the editor.

### Using the Aliases
Now, instead of typing long commands, you can simply use:
```bash
git st      # Short for git status
git co      # Short for git checkout
git lgfav   # Short for git log --oneline --decorate --graph --all
git lg      # Custom detailed Git log format
```

### Checking Existing Aliases
To see all configured aliases, run:
```bash
git config --global --list | grep alias
```


# Ch 17: Changing Commit Message in Git

Many times, we make mistakes while committing changes and write an incorrect commit message.

For example:
```bash
git commit -m "INCORRECT COMMIT MESSAGE"

use git log --oneline  # see the current commit message
```

## Editing the Commit Message
To edit the commit message, use:

```bash
git commit --amend
```

This will open the **Vim** or **Nano** text editor in the terminal.

### Editing in Vim
If **Vim** opens:
1. Press `i` to enter **Insert Mode**.
2. Update the commit message.
3. Press `Esc` to exit **Insert Mode**.
4. Type `:wq` and press **Enter** to save and exit.
   * If you get an error with `:wq`, use `:wq!` to force save and exit.

### Switching to Nano (If Vim Doesn't Work)
If **Vim** doesn't work or you prefer **Nano**, set Nano as the default editor:

```bash
git config --global core.editor "nano"
```

Now, running `git commit --amend` will open **Nano** instead.

### Editing in Nano
1. Update the commit message directly.
2. Press `Ctrl + X` to exit.
3. Press `Y` to confirm changes.
4. Press **Enter** to save and close.

Now try command 

```bash 
git log --oneline
```

It will show you the updated commit message


# Ch 18: How to Reset a Commit in Git  

Commits can be reset in **two ways**:  
1. **Soft Reset**  
2. **Hard Reset** 

---

## **1️⃣ Soft Reset**  

### **What is a Soft Reset?**  
A **soft reset** in Git moves the `HEAD` pointer to an earlier commit **without deleting any changes**. The changes remain **staged** (ready to commit again). It is useful when you want to update the last commit message or make minor changes before committing again.  

**Common Use Cases:**  
- Fixing an incorrect commit message  
- Undoing a commit while keeping the changes staged  
- Removing an accidental commit without losing work  

---

### **2️⃣ Example of a Soft Reset**  

#### **Step 1: Create an Incorrect Commit**  
```bash
git commit -m "SOFT RESET COMMIT"
```

#### **Step 2: Check Commit History**
```bash
git log --oneline
```

Example output:
```
572d5f6 (HEAD -> master) SOFT RESET COMMIT
34b55ce (origin/master) Updating this commit name using git commit --amend
4200e94 Conflict resolved using rebase
33baac7 Create merge-conflict.txt file for causing a conflict
dd9fb21 Merge pull request #3 from JapneetSinghh/Different-Folder-Mac
...
```

### **3️⃣ Deleting a Commit Without Losing Work (Soft Reset)**
To **remove commit** `572d5f6` but keep the work:

**Option 1: Using** `HEAD~1`
```bash
git reset --soft HEAD~1
```
This **moves** `HEAD` to the previous commit while keeping the changes **staged**.

**Option 2: Using Commit Hash**
```bash
git reset --soft 572d5f6^
```
This does the same thing but explicitly targets commit `572d5f6`.

### **4️⃣ Verify Commit is Deleted**
Run:
```bash
git log --oneline
```

Now the commit should be gone:
```
34b55ce (HEAD -> master, origin/master) Updating this commit name using git commit --amend
4200e94 Conflict resolved using rebase
33baac7 Create merge-conflict.txt file for causing a conflict
dd9fb21 Merge pull request #3 from JapneetSinghh/Different-Folder-Mac
...
```

✅ **Commit is deleted, but work is still present in the staging area!**


# 2️⃣ Hard Reset in Git  

## **What is a Hard Reset?**  
A **hard reset** in Git moves `HEAD` to a previous commit and **permanently removes all changes** from the working directory and staging area.  

### **When to Use It?**  
- When you want to **completely delete** the last commit and its changes.  
- When you want to **reset your repository** to a clean state.  
- When you made a mistake and need a **fresh start**.  

🚨 **Be Careful!**  
- **Hard reset erases commits and cannot be undone easily**.  
- If you already pushed the commit to GitHub, you may need to **force push** (`git push --force`).  

---

## **Step-by-Step Guide to Hard Reset**  

### **1️⃣ Create a Dummy File and Commit It**  
```bash
echo "This is a test file" > dummy.txt
git status  
git add -A  
git commit -m "HARD RESET THIS"  
```

### **2️⃣ Check Commit History**
```bash
git log --oneline
```

Example output:
```
33dae8a (HEAD -> master) Hard reset this commit # WILL HARD RESET THIS
c67e451 (origin/master) Soft reset
34b55ce Updating this commit name using git commit --amend
4200e94 Conflict resolved using rebase
33baac7 Create merge-conflict.txt file for causing a conflict
dd9fb21 Merge pull request #3 from JapneetSinghh/Different-Folder-Mac
......
```

### **3️⃣ Perform a Hard Reset**
**Option 1: Reset to One Commit Before** (`HEAD~1`)
```bash
git reset --hard HEAD~1
```
This removes the last commit and deletes all associated changes.

**Option 2: Reset to a Specific Commit (e.g.,** `33dae8a`)
```bash
git reset --hard 33dae8a
```
This resets the repository to `33dae8a` and removes all commits after it.

### **4️⃣ Verify That the Reset Worked**
Check commit history again:
```bash
git log --oneline
```

Now, `33dae8a` is **gone**, and `HEAD` moved back to `c67e451`:
```
c67e451 (HEAD -> master, origin/master) Soft reset
34b55ce Updating this commit name using git commit --amend
4200e94 Conflict resolved using rebase
33baac7 Create merge-conflict.txt file for causing a conflict
dd9fb21 Merge pull request #3 from JapneetSinghh/Different-Folder-Mac
......
```

✅ **Commit and all new work are permanently deleted!**

## **When to Use Hard Reset vs. Soft Reset?**

| Reset Type | Removes Commits? | Keeps Staged Changes? | Keeps Working Directory Changes? | When to Use? |
|------------|------------------|----------------------|----------------------------------|-------------|
| `git reset --soft` | ✅ Yes | ✅ Yes | ✅ Yes | Modify the last commit message or make small changes before recommitting. |
| `git reset --hard` | ✅ Yes | ❌ No | ❌ No | Start fresh by removing all local commits and changes permanently. |


# Ch 19: How to Delete a Commit Even After It Is Pushed  

Sometimes, we **accidentally push a commit** that we later realize should not be in the repository. In such cases, we can **delete the commit permanently** using `git reset` and `git push --force`.  

---

## **Creating a Commit (Example Scenario)**
First, let's create a commit that we want to delete:

```bash
git commit -m "I will delete this commit"
```

Output:

```
[master 1f16d29] I will delete this commit
1 file changed, 5 insertions(+), 1 deletion(-)
```

Now, push the commit to GitHub:

```bash
git push origin master
```

Output:

```
To github.com:JapneetSinghh/Git-Essentials-.git
7f55a94..1f16d29 master -> master
```

Check commit history:

```bash
git log --oneline
```

Example output:

```
1f16d29 (HEAD -> master, origin/master) I will delete this commit
7f55a94 Hard Reset
c67e451 Soft reset
34b55ce Updating this commit name using git commit --amend
```

**Now, we need to delete** `1f16d29` permanently!

## **Deleting the Last Pushed Commit (Using Hard Reset)**

### **Step 1: Reset to the Previous Commit**
To **delete the last commit and remove its changes**, run:

```bash
git reset --hard 7f55a94
```

This moves `HEAD` back to `7f55a94`, **removing commit** `1f16d29` and its changes completely.

### **Step 2: Force Push the Reset**
Since we already pushed `1f16d29` to GitHub, we need to **force push** the reset:

```bash
git push origin master --force
```

**Warning:**
* `--force` will **overwrite history on GitHub**, so be careful.
* If working in a **team**, ensure that no one else has pulled the commit before doing this.

## **Verifying That the Commit is Deleted**
Now, check the commit history:

```bash
git log --oneline
```

Example output:

```
7f55a94 (HEAD -> master) Hard Reset
c67e451 Soft reset
34b55ce Updating this commit name using git commit --amend
```

**The commit** `1f16d29` is now gone!

## **Alternative: Undo a Commit Without Deleting Changes**
If you want to **undo a commit but keep the changes**, use:

```bash
git reset --soft HEAD~1
git push origin master --force
```

This will **remove the commit** but keep the files staged.


# Ch 20: Git Revert: Undoing Commits Safely  

## **What is `git revert`?**  
`git revert` is a **safe way to undo a commit** by creating a **new commit that reverses changes** from a previous commit. Unlike `git reset`, it **does not remove commits from history**, making it ideal for **team collaboration** and shared repositories.  

---

## **When to Use `git revert`?**  
- When you **want to undo a commit without rewriting Git history**.  
- When working in **a shared repository** and need to **preserve commit history**.  
- When a **mistake was committed and pushed**, and you need to reverse it.  
- When you **want to undo a specific commit** without affecting later commits.  

---

## **What to Take Care of?**  
- `git revert` **does not delete commits**, it creates **a new commit that negates changes**.  
- If the commit you're reverting **affects multiple files**, you may need to manually resolve conflicts.  
- If you revert a commit that was **already pushed**, you still need to `git push` the new revert commit.  

---

## **Usage Examples**  

### **Reverting the Last Commit**
If the most recent commit (`HEAD`) is incorrect, **revert it**:
```bash
git revert HEAD
```

This opens a text editor (Nano or Vim) to confirm the revert commit message.
* **Press** `CTRL + X → Y → Enter` (Nano) or `:wq` (Vim) to save and exit.
* A **new commit is created that undoes the previous commit**.

**Before Revert** (`git log --oneline`):

```
abc1234 (HEAD -> master) Bad commit ❌
def5678 Fixed login issue
ghi9101 Added README
```

**After Revert** (`git log --oneline`):

```
xyz9999 (HEAD -> master) Revert "Bad commit"
abc1234 Bad commit
def5678 Fixed login issue
```

**Commit is undone without removing history!**

### **Reverting a Specific Commit**
To **undo a commit that is not the latest one**, find its hash:

```bash
git log --oneline
```

Example output:

```
abc1234 Bad commit ❌ (We want to undo this)
def5678 Fixed login issue
ghi9101 Added README
```

Run:

```bash
git revert abc1234
```

This **reverts only that commit**, leaving the rest of the commits unchanged.

### **Reverting Multiple Commits**
To **undo multiple commits**, use:

```bash
git revert HEAD~3..HEAD
```

This reverts the last **three commits separately**.

To **undo multiple commits in one revert commit**, use:

```bash
git revert --no-commit HEAD~3..HEAD
git commit -m "Reverted last 3 commits"
```

### **Handling Revert Conflicts**
If `git revert` causes conflicts:
1. **Fix conflicts manually** in affected files.
2. **Stage the fixed files**:

```bash
git add .
```

3. **Continue the revert**:

```bash
git revert --continue
```

### **Reverting a Commit That Was Pushed**
If the commit is **already pushed to GitHub**, use:

```bash
git revert HEAD
git push origin master
```

This **safely updates the repository without rewriting history**.

## **Comparison: `git revert` vs. `git reset`**

| Feature | `git revert` | `git reset` |
|---------|-------------|------------|
| **Purpose** | Creates a new commit that undoes changes | Moves HEAD back to a previous commit |
| **Deletes Commit?** | No (keeps history intact) | Yes (removes commits) |
| **Safe for Teams?** | Yes | No (`--hard` is destructive) |
| **Requires Force Push?** | No | Yes (`git push --force`) |
| **Reverts a Specific Commit?** | Yes | No, resets everything after that commit |


# Ch 21: Understanding `git rebase` in Git 

## **What is `git rebase`?** 
`git rebase` is a Git command used to **move or replay commits on top of another branch**. Instead of merging branches (which creates a merge commit), `rebase` **rewrites commit history** by applying changes one by one on top of the latest commit of another branch. 

--- 

## **When to Use `git rebase`?** 

✅ **Use `git rebase` when:** 
- You want a **clean, linear commit history** (without unnecessary merge commits). 
- You need to **update your feature branch with the latest changes from `main/master`** before merging. 
- You are working **alone** and want to keep your commits tidy. 

❌ **Avoid `git rebase` when:** 
- You are working on a **shared branch** and others have already pulled your changes. 
- You don't want to **rewrite commit history** (use `git merge` instead). 
- Your branch is already merged or has important commits that should not be altered. 

---

# Fixing Rebase Conflicts in Git  

## **What is Git Rebase?**  
`git rebase` is a Git command used to **move or replay commits** on top of another branch. It helps in keeping a **linear commit history** by applying changes one by one instead of merging.

### **Example: Before and After Rebasing**
Before rebasing:

```
* 694afda Rebase conflict from master branch (HEAD -> master)
| |
* c785a54 Rebase Conflict (origin/rebase-branch, rebase-branch)
|/
|
* 4af3773 Conflict resolved (origin/master)
|\
| |
| * 99cb87d Create MergeConflcit.txt
| |
* | 873857b Causing a conflict
|/
|
* 0839405 Updated Readme.md
```

After successful rebasing:

```
* cd89855 Rebase conflict from master branch (HEAD -> master)
|
* c785a54 Rebase Conflict (origin/rebase-branch, rebase-branch)
|
* 4af3773 Conflict resolved (origin/master)
|\
| |
| * 99cb87d Create MergeConflcit.txt
| |
* | 873857b Causing a conflict
|/
|
* 0839405 Updated Readme.md
```

✅ **History becomes linear, making commits easier to track!** 

--- 

## **How to Fix Rebase Conflicts** 

### **1. Rebase the Master Branch Onto rebase-branch** 
```bash
git checkout master
git rebase rebase-branch
```

🚨 **Error Message:**

```
Auto-merging Rebase-conflict.txt
CONFLICT (add/add): Merge conflict in Rebase-conflict.txt
error: could not apply 694afda... Rebase conflict from master branch
```

This happens because `Rebase-conflict.txt` exists in both branches with different changes.

### **2. Check the Rebase Status**

```bash
git status
```

Output:

```
interactive rebase in progress; onto c785a54
Last command done (1 command done):
   pick 694afda Rebase conflict from master branch
No commands remaining.
You are currently rebasing branch 'master' on 'c785a54'.
  (fix conflicts and then run "git rebase --continue")
  (use "git rebase --skip" to skip this patch)
  (use "git rebase --abort" to check out the original branch)

Unmerged paths:
  (use "git add <file>..." to mark resolution)
        both added:      Rebase-conflict.txt
```

✅ **This tells us the conflict is in** `Rebase-conflict.txt`.

### **3. Open the Conflicted File**

```
<<<<<<< HEAD
Rebase conflict from master branch 1
Rebase conflict from master branch 2
Rebase conflict from master branch 3
=======
Rebase conflict from rebase branch 1
Rebase conflict from rebase branch 4
Rebase conflict from rebase branch 5
>>>>>>> rebase-branch
```

* **Everything between** `<<<<<<< HEAD` and `=======` is from `master`.
* **Everything between** `=======` and `>>>>>>> rebase-branch` is from `rebase-branch`.

### **4. Resolve the Conflict Manually**
Edit the file to keep the correct version and remove the conflict markers:

```
Rebase conflict from master branch 1
Rebase conflict from master branch 2
Rebase conflict from rebase branch 4
Rebase conflict from rebase branch 5
```

### **5. Mark the Conflict as Resolved**

```bash
git add Rebase-conflict.txt
git rebase --continue
```

✅ **If there are no more conflicts, the rebase completes successfully!**

### **6. Verify the Rebase**

```bash
git log --oneline --graph --decorate --all
```

✅ The commit history is now rewritten with a clean linear structure.

### **Alternative: If You Want to Abort the Rebase**
If you want to **cancel the rebase** and return to the previous state:

```bash
git rebase --abort
```

✅ **This resets your branch to the state before the rebase started.**


# Ch 22: Git Stash: Save Work Without Committing  

## **What is `git stash`?**  
`git stash` temporarily saves **uncommitted changes** so you can switch branches without losing work.  
It **clears the working directory** while allowing you to reapply changes later.

---

## **When & Where to Use `git stash`?**  
- When you need to **switch branches** but don't want to commit incomplete work.  
- When working on **multiple features** and need to **pause** one.  
- Before pulling updates to **avoid merge conflicts**.  

Don't use it for **long-term storage**—commits are safer.

---

## **How to Use `git stash`**
### **Save Your Work**
```bash
git stash
```

This **saves** all **uncommitted** changes.

### **View Stashed Changes**
```bash
git stash list
```

Output:
```
stash@{0}: WIP on feature-branch: abc1234 Added new feature
stash@{1}: WIP on master: xyz5678 Updated README
```

### **Reapply Stashed Changes**
```bash
git stash apply
```
Reapplies the **most recent stash** but **keeps it in the stash list**.

```bash
git stash pop
```
Reapplies the **most recent stash** and **removes it from the stash list**.

### **Apply a Specific Stash**
```bash
git stash apply stash@{1}
```
Reapplies an **older stash**.

### **Remove a Stash**
```bash
git stash drop stash@{0}
```
Deletes a specific stash.

```bash
git stash clear
```
**Removes all stashes**.

### **Summary of Commands**
```bash
git stash            # Save uncommitted changes
git stash list       # View saved stashes
git stash apply      # Reapply most recent stash
git stash pop        # Reapply & remove most recent stash
git stash drop stash@{0}  # Delete a specific stash
git stash clear      # Delete all stashes
>>>>>>> c2f5bfd (Added index in file)
```