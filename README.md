# GitClub

This doesn't pretend to be the only way to use git, but it's the way that I do it, so it's almost definitely the best.

<details>
  <summary id="Set-up-your-project">Set up your project</summary>

## Set up your project

First you need a GitHub account. If you haven't got one then make one now.

Go to https://github.com/rich-Steele/CodingClub (reading this, you may already be on this page, you may have found this page somewhere else, open a new window so you can follow this still)

Top right, click on Fork

Then click on your name to be taken to the url of: `https://github.com/<YOUR_NAME>/CodingClub`

This is the github page for your copy of my repository..

Click green button "Code" in the middle, make sure that HTTPS is selected for now, and copy the grey box text (click the two squares symbol to copy automatically)

Now it's all set up on github, next we set up on your computer.

---

Go to wherever you want this project to be in your file explorer. Doesn't matter where, mine's in Documents

Right click, git bash here, then type `git clone ` and right click and paste the thing you copied before. It should look like:
```git clone https://github.com/<YOUR_NAME>/CodingClub.git```

Hit return and wait. This copies down everything from github

Next move the bash window into the folder with:
```cd CodingClub```  - *cd stands for change directory*

---

Next add me as a remote! That's just someone else's fork (copy of the repo) that you are keeping an eye on via github

First notice how you have no remotes currently. Type:
`git remote` and it will just have origin in there - *origin is what it always calls your repo*

add me:
```git remote add blessed https://github.com/rich-Steele/CodingClub.git```

then:
`git remote` will show blessed as well. Blessed is traditionally the name of the repo that you fork from. Often not owned by any dev in particular, but the organisation.
> A blessed, or canonical, repository is one which has the approval of the managers of the project. The blessed repository is supposed to be the de facto standard where all other clones are made from. If there is one place where code should be correct, it is the blessed repository.

You can even add each other if you like, though you will have to track down the address of each others fork. It will look like the one for mine but with the other persons name instead. You then type git remote add *(nickname or alias)* *(their fork url)*. So for me to add Perry would mean I would type something like:

```git remote add pezzer https://github.com/Perry-PerrysSecondName-Bluefruit/CodingClub.git```

And double check it with `git remote`. Finding the url of other people's forks isn't obvious, I go to the blessed fork on github, top right where it says fork, and click on the number next to it. This takes you to a page that has links to all the forks, those links are the url that you would use when adding a remote with the above command. So copy the link, or click on it and copy the text from the url bar in the browser. To see this on an established project have a look at [the NES assembler I use](https://github.com/Richard-Steele-Bluefruit/nesasm). If you click the number up by fork, you will see a few people have forked this repo, including me! You will see my name on that list *Richard-Steele-Bluefruit / nesasm*, clicking on *nesasm* will take you to my fork of that repo. This is what you would do when more people have forked CodingClub, and you want to add them as remotes.

Almost done

Lastly we are default on master branch. This is bad! Don't be in master branch for long. Master is your important branch! Not a working branch! It is the single source of truth in your repo that should be consistent with everyone elses master branch. A team working well together will all have an equivalent master branches to each other and blessed, and have their work-in-progresses all branched from that same place.

You can see your branches by typing `git branch`, it should just say master or main actually now as master isn't politically correct as of this year. You will keep seeing me mix it up though sorry. And talking to other devs about master is fine. Everyone knows what it means. You bigot.

Type this to create and move to one alongside it that's safe to muck around in:
`git checkout -b WorkingBranch`			(`-b` means do a new branch, WorkingBranch is a name I made up, make your own up if you want

And check by typing `git branch` again. You'll see both main/master and the new WorkingBranch there. The one you are sat in currently will be highlighted.

Done!!!
</details>

<details>
  <summary id="Nicer-git-environment">Nicer git environment</summary>

## Nicer git environment

Viewing git as a tree is the best way, it makes branches and merges make sense visually. There are a bunch of tools to do this. I've used GitGUI, GitKraken, tortoiseGit and more, and they all pretty much do the same thing. The one I prefer though, and would recommend, is in VS Code, go to left hand side bar 'extensions' looks like 4 squares, go a search for 'Git Graph', and install that.

Now in VS code after you go to the top tool bar -> File -> Open Folder and choose the Coding club folder, an extra option will appear! If you go to the left hand side bar and click on 'source control' (three small circles with a couple of connecting lines), there are five icons along the top bar marked SOURCE CONTROL. The one that looks like 3 vertical lines with three dots on is 'View Git Graph'. Clicking that will show the git tree representation. The other useful control here is the 'Show Remote Branches' tick box at the top in the middle, which will toggle whether to show the remote repos as well, or just your own stuff.

Working in this view is highly recommended. Even when doing my work in a different IDE (Integrated development environment) like Visual studio 2015 which is where this project will be mostly based, I still keep a VS Code window open with Git Graph because it's pretty. Also if you go to the top menu bar and click Terminal -> New Terminal then you even get a nice window below to type in any git commands. Just make sure it's a bash window rather than powershell or other. The plus sign on the top right of your new terminal window lets you pick and add a new terminal window and type.

Lastly you have to set visual studios code with your git infomation. Type:

`git config --global user.name` followed by your name so mine would look like:

> `git config --global user.name Richard Steele`

`git config --global user.email` followed by your email for your github account

and then if you don't want to have to enter your password each time then do:

`git config --global user.password` followed by your password for your github account. But obviously not on a shared computer

</details>

<details>
  <summary id="Visual-studios">Visual studios</summary>

## Visual studios

I've checked on the magic sheet and you've all got the 2015 version so I have set up a project in that. It shouuuld just open in that if you double click the CodingClub.sln file, but if not then right click it, open with, and choose Microsoft Visual Studio Version Selector. That will open it for you. You'll see some stuff. Things to get started with are:
+ Right hand side - Solution explorer
    - There are two projects in there:
        + CodingClub - we write functions in here. In Source files -> MathsLibrary.cpp to begin with
        + CodingClubTests - the unit tests. In Source files -> MathsLibraryTests.cpp to begin with
    - Top menu bar bit, click on 'Test -> Windows -> Test Explorer' and a new Test Explorer window appears on the left, this is where we navigate unit tests

Ctrl + Shift + B will build the code, and some tests should appear in that test explorer window, click Run All and they should turn green.

Process is to write code in Coding club project, tests in the tests project, build, and check the tests pass.

The challenge for this is to fill out that MathsLibrary file with mathsy functions: Divide, square, to start with, then some more complicated stuff maybe, and have it all match up to unit tests.

We'll do string stuff too.

Actually I'll write a quick one now.

Done. Only one test though, but it's a jumping off point!
</details>

<details>
  <summary id="Check-it-all-works">Check it all works</summary>

## Check it all works!

So the string function I added, only checks for lower case vowels. The challenge is to fix for upper case vowels as well. Do this:
+ Write a failing test (with upper case vowels in)
+ Run the tests and check it fails
+ Fix the function so the test passes
+ Commit
+ Push
+ Pull request

You should be able to figure out the first 3 steps by looking at the code. Then:

#### Commit

This is where you save a change that you have done to the git tree on your computer. There are different ways to do this. For now, use visual studio code. Once you have made your changes and saved the file, in the menu bar on the left click on the third icon down again to get to the source control panel. There is a messages section and a changes section. In the changes section you will see all of the files that have changed (sometimes there are more here than you expect like built or config files), click on the one(s) that you want to commit, you will see the changes, next to the name in the changes section are some icons. Click on the plus symbol to add that file's changes to this commit. When you have added all you want to, Type a good message and finally the tick at the top finishes the commit.

The commit message here is really important. Seriously. When in many years time you are searching for a change you made, you will be searching commit messages. Don't write WIP or fixed bug. Read [this](https://dhwthompson.com/2019/my-favourite-git-commit) if you have the patience or [this](https://www.reddit.com/r/ProgrammerHumor/comments/5y3ggn/whats_the_best_commit_message_youve_ever_seen/) for a laugh.

#### Push

This sends the current branch's commits up to the internet in this case github. Type:

`git push`

The first time you do this it says an error. This is because github doesn't yet know about your new branch. Nicely though, it tells you what to type to fix this. Copy what it says and it will work nicely. (instead of `--set-upstream` you can use the shorthand `-u`). Eventually you will get used to typing this out the first time you push a new branch, but it's okay for now to go through this process. Now the internet knows about this branch and you can use just `git push` in the future.

Also if this is the first time that you push then github may ask for authorisation. 

#### Pull request

This sends a request to blessed to merge in the changes you have made. Go to your github fork page and find your way to the branch that you have just pushed, and click New Pull Request. I won't go into details here as there are a few ways to do this. If you are quick enough after pushing then github will even give you a notification about the branch and suggest that you pull request. GIve the pull request a sensible title, and a good description. Check the files changed are the ones you want, then submit it.

As the owner of blessed, I will get a notification then. I will comment on the PR, and potentially merge in your changes. Get used to people commenting on your code, and commenting on others. Code reviews are a huge part of software development, and are a safe place to improve and learn. Eventually you will all be code reviewing each other. Don't take offense, this is the final call before dev work goes into production code where it will often not change again. On this note, you do not merge in your own pull requests. Say it out loud. You Do Not Merge In Your Own Pull Requests! (Unless the product owner tells you to I suppose) They must be reviewed always. No exceptions. If you accidentally click merge, then get a grown up. We've all done it, I've done it. Get it fixed asap. PRs have to be reviewed, approved, then merged.

In this case, I won't actually merge in your changes, but I will comment. Seeing that on your PR will be the final step so you know this is all working. This also serves to register your interest, so I will then add you to the slack channel, and you can access the trello board to see what comes next!
</details>

<details>
  <summary id="Updating-with-stuff-Ive-added">Updating with stuff I've added</summary>

## Updating with stuff I've added


`git fetch --all` This gets any changes that any of your remotes has made. The purpose here is to fetch any changes that I (blessed) have pushed, like a new challenge

`git checkout main` We briefly enter main branch to update it, remember always keep main up to date, and branch off from that point!

`git merge blessed/main` This merges in MY (blessed) main branch. Now yours is upto date

Now, so you don't accidentally start working in main, get out of it! Either by checking out a new branch from this point with either

`git checkout -b <some new branch name>`

Or, bring a previous branch you are working on up to date

`git checkout WorkingBranch`

`git merge main`

Now you are good to go. Assuming there are no merge conflicts. This is where a change that you have made in your work-in-progress (WIP) branch conflicts with a change that has been made by blessed to main. If so it will bring up the conflicting lines, and ask you to choose which one to keep. Be careful! This is where you can, and we all have at some point, lost work. On your WIP branch, commit early, commit often, and it will be fine.
</details>

<details>
  <summary id="What-comes-next">What comes next?</summary>

## What comes next?

As well as the coding club project which will be there to provide small challenges, a unit testing playground, snippets of example code to refer to, or anything else that doesn't really have a home, we are going to be making something! I'm not completely sure what yet, probably a game! Which means we need some game making code. I have set up a GameEngine project and a [Trello board](https://trello.com/invite/b/YUMvodZV/ecab63e0249f49606f7cd474ef239d1e/ccgameengine) and it's going to be amazing! A proper open source project for us all work on together. One day we'll add another project for a web based front end to show something and learn website stuff, and who knows what else! Until I update this readme though, we'll be working on that game engine project and learning lots of key software development practices on the way.

Glhf,

Rich
</details>






