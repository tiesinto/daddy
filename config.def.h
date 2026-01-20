static const int givecom  = 1; /* 1 enables compliments */
static const int giveenc  = 1; /* 1 enables encouragement */

static const char color[] = "#d22d72"; /* default output color */
static const char ending[] = "~\n";    /* default ending for responses */

/* your nicknames */
static const char *sweetie[] = { "boy", "sweetheart" };

/* denigrating terms */
static const char *disparagement[] = { "slut", "pervert" };

/* caregivers' names, 'gift' and pronouns */
static const Caregiver caregivers[] = {
	/* name      gift     they    them    their   theirs   themself */
	{ "daddy",   "cum",   "he",   "him",  "his",  "his",   "himself" },
	{ "dada",    "cum",   "he",   "him",  "his",  "his",   "himself" },
	/*{ "mommy",   "milk",  "she",  "her",  "her",  "hers",  "herself" },*/
};

/*
 * compliments and encouragements
 *
 * bundled responses come from fwdekker/mommy, natawie/mommy-rs,
 * Gankra/cargo-mommy and sudofox/shell-mommy with alterations by me
 */
static const char *compliments[] = {
	/* mommy */

	/* generic */
	"*pets your head*",
	"amazing work as always",
	/* good X */
	"good %%SWEETIE%%",
	"that's a good %%SWEETIE%%",
	"who's my good %%SWEETIE%%",
	/* proud */
	"%%CAREGIVER%% is very proud of you",
	"%%CAREGIVER%% is so proud of you",
	"%%CAREGIVER%% knew you could do it",
	"%%CAREGIVER%% loves you, you are doing amazing",
	/* compliment */
	"%%CAREGIVER%%'s %%SWEETIE%% is so smart",
	/* reward */
	"%%CAREGIVER%% thinks you deserve a special treat for that",
	"my little %%SWEETIE%% deserves a big fat kiss for that",

	/* mommy-rs */

	/* generic */
	"%%CAREGIVER%% is so proud of %%THEIR%% little %%SWEETIE%%",
	"good job my little %%SWEETIE%%",
	"you're doing great, %%SWEETIE%%",
	"%%CAREGIVER%% thinks %%THEIR%% little %%SWEETIE%% is doing a great job",
	"who's %%CAREGIVER%%'s little %%SWEETIE%%",

	/* cargo-mommy */

	/* generic */
	"*pets your head*",
	"*gives you scritches*",
	"you're such a smart cookie",
	"that's a good %%SWEETIE%%",
	"%%CAREGIVER%% thinks %%THEIR%% little %%SWEETIE%% earned a big hug",
	"good %%SWEETIE%%~\n%%CAREGIVER%%'s so proud of you",
	"aww, what a good %%SWEETIE%%~\n%%CAREGIVER%% knew you could do it",
	"you did it!",
	"%%CAREGIVER%% loves you",
	"*gives you a sticker*",
	"*boops your nose*",
	"*wraps you in a big hug*",
	"well done~!\n%%CAREGIVER%% is so happy for you",
	"what a good %%SWEETIE%% you are",
	"that's %%CAREGIVER%%'s clever little %%SWEETIE%%",
	"you're doing so well!",
	"you're making %%CAREGIVER%% so happy",
	"%%CAREGIVER%% loves %%THEIR%% cute little %%SWEETIE%%",
	/* thirsty */
	"*tugs your leash*\nthat's a VERY good %%SWEETIE%%",
	"*runs %%THEIR%% fingers through your hair* good %%SWEETIE%%~ keep going",
	"*smooches your forehead*\ngood job",
	"*nibbles on your ear*\nthat's right~\nkeep going",
	"*pats your butt*\nthat's a good %%SWEETIE%%",
	"*drags %%THEIR%% nail along your cheek*\nsuch a good %%SWEETIE%%",
	"*bites %%THEIR%% lip*\nmhmm",
	"give %%CAREGIVER%% a kiss",
	"*heavy breathing against your neck*",
	/* yikes */
	"keep it up and %%CAREGIVER%% might let you cum you little %%DISPARAGEMENT%%",
	"good %%DISPARAGEMENT%%~\nyou've earned five minutes with the buzzy wand",
	"mmm~ come taste %%CAREGIVER%%'s %%FLUID%%",
	"*slides %%THEIR%% finger in your mouth*\nthat's a good little %%DISPARAGEMENT%%",
	"you're so good with your fingers~\n%%CAREGIVER%% knows where %%THEIR%% %%DISPARAGEMENT%% should put them next",
	"%%CAREGIVER%% is getting hot",
	"that's a good %%DISPARAGEMENT%%",
	"yes~\nyes~~\nyes~~",
	"%%CAREGIVER%%'s going to keep %%THEIR%% good little %%DISPARAGEMENT%%",
	"open wide %%DISPARAGEMENT%%.\nyou've earned %%CAREGIVER%%'s %%FLUID%%",
	"do you want %%CAREGIVER%%'s %%FLUID%%?\nkeep this up and you'll earn it",
	"oooh~ what a good %%DISPARAGEMENT%% you are",

	/* shell-mommy */

	/* generic */
	"*pets your head*",
	"awe, what a good %%SWEETIE%%~\n%%CAREGIVER%% knew you could do it",
	"good %%SWEETIE%%~\n%%CAREGIVER%%'s so proud of you",
	"keep up the good work, my love",
	"%%CAREGIVER%% is proud of the progress you've made",
	"%%CAREGIVER%% is so grateful to have you as %%THEIR%% little %%SWEETIE%%",
	"i'm so proud of you, my love",
	"%%CAREGIVER%% is so proud of you",
	"%%CAREGIVER%% loves seeing %%THEIR%% little %%SWEETIE%% succeed",
	"%%CAREGIVER%% thinks %%THEIR%% little %%SWEETIE%% earned a big hug",
	"that's a good %%SWEETIE%%",
	"you did an amazing job, my dear",
	"you're such a smart cookie"
};

static const char *encouragements[] = {
	/* mommy */

	/* trust */
	"%%CAREGIVER%% believes in you",
	"%%CAREGIVER%% knows you'll get there",
	"%%CAREGIVER%% knows %%THEIR%% little %%SWEETIE%% can do better",
	"just know that %%CAREGIVER%% still loves you",
	/* consolation */
	"don't worry, it'll be alright",
	"it's okay to make mistakes",
	"%%CAREGIVER%% knows it's hard, but it will be okay",
	/* fallback */
	"%%CAREGIVER%% is always here for you",
	"%%CAREGIVER%% is always here for you if you need %%THEM%%",
	"come here, sit on my lap while we figure this out together",
	/* encouragement */
	"never give up, my love",
	"just a little further, %%CAREGIVER%% knows you can do it",
	"%%CAREGIVER%% knows you'll get there, don't worry about it",
	/* clean up */
	"did %%CAREGIVER%%'s %%SWEETIE%% make a big mess",

	/* mommy-rs */

	/* generic */
	"don't be so hard on yourself my little %%SWEETIE%%",
	"it's okay my little %%SWEETIE%%, %%CAREGIVER%% still loves you",
	"%%CAREGIVER%%'s sure %%THEIR%% little %%SWEETIE%% will get it next time",
	"don't worry, %%CAREGIVER%% still loves you no matter what",
	"even %%CAREGIVER%% makes mistakes sometimes",

	/* cargo-mommy */

	/* generic */
	"%%CAREGIVER%% believes in you",
	"don't forget to hydrate",
	"aww, you'll get it next time",
	"do you need %%CAREGIVER%%'s help?",
	"everything's gonna be ok",
	"%%CAREGIVER%% still loves you no matter what",
	"oh no did %%CAREGIVER%%'s little %%SWEETIE%% make a big mess?",
	"%%CAREGIVER%% knows %%THEIR%% little %%SWEETIE%% can do better",
	"%%CAREGIVER%% still loves you",
	"%%CAREGIVER%% thinks %%THEIR%% little %%SWEETIE%% is getting close",
	"it's ok, %%CAREGIVER%%'s here for you",
	"oh, darling, you're almost there",
	"does %%CAREGIVER%%'s little %%SWEETIE%% need a bit of a break?",
	"oops~! %%CAREGIVER%% loves you anyways",
	"try again for %%CAREGIVER%%, %%SWEETIE%%",
	"don't worry, %%CAREGIVER%% knows you can do it",
	/* thirsty */
	"you're so cute when you're flustered",
	"do you think you're going to get a reward from %%CAREGIVER%% like that?",
	"*grabs your hair and pulls your head back*\nyou can do better than that for %%CAREGIVER%% can't you?",
	"if you don't learn how to code better, %%CAREGIVER%% is going to put you in time-out",
	"does %%CAREGIVER%% need to give %%THEIR%% little %%SWEETIE%% some special lessons?",
	"you need to work harder to please %%CAREGIVER%%",
	"gosh you must be flustered",
	"are you just keysmashing now~?\ncute",
	"is %%CAREGIVER%%'s little %%SWEETIE%% having trouble reaching the keyboard?",
	/* yikes */
	"you filthy %%DISPARAGEMENT%%~\nyou made a mess, now clean it up~\nwith your tongue",
	"*picks you up by the throat*\npathetic",
	"*drags %%THEIR%% claws down your back*\ndo it again",
	"*brandishes %%THEIR%% paddle*\ndon't make me use this",
	"get on your knees and beg %%CAREGIVER%% for forgiveness you %%DISPARAGEMENT%%",
	"%%CAREGIVER%% doesn't think %%THEIR%% little %%DISPARAGEMENT%% should have permission to wear clothes anymore",
	"never forget you belong to %%CAREGIVER%%",
	"does %%CAREGIVER%% need to put you in the whore wiggler?",
	"%%CAREGIVER%% is starting to wonder if you should just give up and become %%THEIR%% breeding stock",
	"on your knees %%DISPARAGEMENT%%",
	"oh dear. %%CAREGIVER%% is not pleased",
	"one spank per error sounds appropriate, don't you think %%DISPARAGEMENT%%?",
	"no more %%FLUID%% for you %%DISPARAGEMENT%%",

	/* shell-mommy */

	/* generic */
	"do you need %%CAREGIVER%%'s help?",
	"don't give up, my love",
	"don't worry, %%CAREGIVER%% is here to help you",
	"i believe in you, my sweet %%SWEETIE%%",
	"it's okay to make mistakes, my dear",
	"just a little further, sweetie",
	"let's try again together, okay?",
	"%%CAREGIVER%% believes in you, and knows you can overcome this",
	"%%CAREGIVER%% believes in you",
	"%%CAREGIVER%% is always here for you, no matter what",
	"%%CAREGIVER%% is here to help you through it",
	"%%CAREGIVER%% is proud of you for trying, no matter what the outcome",
	"%%CAREGIVER%% knows it's tough, but you can do it",
	"%%CAREGIVER%% knows %%THEIR%% little %%SWEETIE%% can do better",
	"%%CAREGIVER%% knows you can do it, even if it's tough",
	"%%CAREGIVER%% knows you're feeling down, but you'll get through it",
	"%%CAREGIVER%% knows you're trying your best",
	"%%CAREGIVER%% loves you, and is here to support you",
	"%%CAREGIVER%% still loves you no matter what",
	"you're doing your best, and that's all that matters to %%CAREGIVER%%",
	"%%CAREGIVER%% is always here to encourage you"
};
