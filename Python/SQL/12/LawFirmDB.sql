USE [LawFirmDB]
GO
/****** Object:  Table [dbo].[Attorneys]    Script Date: 27-Mar-22 3:19:41 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Attorneys](
	[AttorneyID] [int] IDENTITY(1,1) NOT NULL,
	[FirstName] [nvarchar](50) NULL,
	[LastName] [nvarchar](50) NULL,
	[Telephone] [nvarchar](50) NULL,
 CONSTRAINT [PK_Attorneys] PRIMARY KEY CLUSTERED 
(
	[AttorneyID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Billing]    Script Date: 27-Mar-22 3:19:41 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Billing](
	[BillingID] [int] IDENTITY(1,1) NOT NULL,
	[ClientID] [int] NULL,
	[Date] [date] NULL,
	[CategoryID] [nvarchar](50) NULL,
	[Hours] [float] NULL,
	[RateID] [int] NULL,
	[AttorneyID] [int] NULL,
 CONSTRAINT [PK_Billing] PRIMARY KEY CLUSTERED 
(
	[BillingID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Categories]    Script Date: 27-Mar-22 3:19:41 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Categories](
	[CategoryID] [nvarchar](50) NOT NULL,
	[Category] [nvarchar](50) NULL,
 CONSTRAINT [PK_Categories] PRIMARY KEY CLUSTERED 
(
	[CategoryID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Clients]    Script Date: 27-Mar-22 3:19:41 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Clients](
	[ClientID] [int] IDENTITY(1,1) NOT NULL,
	[FirstName] [nvarchar](50) NULL,
	[LastName] [nvarchar](50) NULL,
	[StreetAddress] [nvarchar](100) NULL,
	[City] [nvarchar](50) NULL,
	[State] [nvarchar](50) NULL,
	[ZipCode] [nvarchar](50) NULL,
	[Telephone] [nvarchar](50) NULL,
 CONSTRAINT [PK_Clients] PRIMARY KEY CLUSTERED 
(
	[ClientID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Rates]    Script Date: 27-Mar-22 3:19:41 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Rates](
	[RateID] [int] IDENTITY(1,1) NOT NULL,
	[Rate] [money] NULL,
 CONSTRAINT [PK_Rates] PRIMARY KEY CLUSTERED 
(
	[RateID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
SET IDENTITY_INSERT [dbo].[Attorneys] ON 

INSERT [dbo].[Attorneys] ([AttorneyID], [FirstName], [LastName], [Telephone]) VALUES (12, N'Thomas', N'Zieger', N'(253) 555-9632')
INSERT [dbo].[Attorneys] ([AttorneyID], [FirstName], [LastName], [Telephone]) VALUES (14, N'Marjorie', N'Shaw', N'(253) 555-9612')
INSERT [dbo].[Attorneys] ([AttorneyID], [FirstName], [LastName], [Telephone]) VALUES (17, N'Kathleen', N'Jordan', N'(253) 555-9679')
INSERT [dbo].[Attorneys] ([AttorneyID], [FirstName], [LastName], [Telephone]) VALUES (19, N'Daniel', N'McKay', N'(253) 555-9682')
SET IDENTITY_INSERT [dbo].[Attorneys] OFF
GO
SET IDENTITY_INSERT [dbo].[Billing] ON 

INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (1, 164, CAST(N'2018-06-01' AS Date), N'G', 1, 3, 14)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (2, 225, CAST(N'2018-06-01' AS Date), N'SE', 1.75, 1, 12)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (3, 321, CAST(N'2018-06-01' AS Date), N'CC', 1.5, 4, 19)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (4, 187, CAST(N'2018-06-01' AS Date), N'P', 2, 2, 17)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (5, 138, CAST(N'2018-06-01' AS Date), N'SE', 0.5, 1, 12)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (6, 164, CAST(N'2018-06-04' AS Date), N'G', 1.75, 3, 14)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (7, 263, CAST(N'2018-06-04' AS Date), N'IN', 0.75, 3, 14)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (8, 187, CAST(N'2018-06-04' AS Date), N'P', 0.75, 4, 17)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (9, 164, CAST(N'2018-06-04' AS Date), N'G', 1.5, 4, 14)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (10, 138, CAST(N'2018-06-04' AS Date), N'SE', 0.75, 2, 12)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (11, 205, CAST(N'2018-06-04' AS Date), N'P', 1, 3, 19)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (12, 110, CAST(N'2018-06-04' AS Date), N'SE', 2, 1, 14)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (13, 130, CAST(N'2018-06-05' AS Date), N'IN', 1, 3, 14)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (14, 138, CAST(N'2018-06-05' AS Date), N'SE', 2, 1, 12)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (15, 164, CAST(N'2018-06-05' AS Date), N'G', 1.5, 3, 14)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (16, 321, CAST(N'2018-06-06' AS Date), N'CV', 0.75, 1, 19)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (17, 225, CAST(N'2018-06-06' AS Date), N'CV', 1.5, 1, 12)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (18, 241, CAST(N'2018-06-06' AS Date), N'G', 1, 2, 12)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (19, 110, CAST(N'2018-06-06' AS Date), N'SE', 1, 1, 14)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (20, 125, CAST(N'2018-06-07' AS Date), N'CC', 1.5, 4, 19)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (21, 144, CAST(N'2018-06-07' AS Date), N'SE', 0.25, 1, 12)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (22, 321, CAST(N'2018-06-07' AS Date), N'CC', 1, 4, 19)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (23, 164, CAST(N'2018-06-07' AS Date), N'G', 1.25, 4, 14)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (24, 110, CAST(N'2018-06-08' AS Date), N'SE', 1.5, 1, 14)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (25, 225, CAST(N'2018-06-08' AS Date), N'CV', 0.5, 1, 12)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (26, 187, CAST(N'2018-06-08' AS Date), N'P', 2, 2, 17)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (27, 130, CAST(N'2018-06-08' AS Date), N'D', 1, 2, 14)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (28, 255, CAST(N'2016-06-11' AS Date), N'D', 1.5, 2, 14)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (29, 275, CAST(N'2018-06-11' AS Date), N'SE', 2.25, 1, 17)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (30, 321, CAST(N'2018-06-11' AS Date), N'CC', 1.5, 4, 19)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (31, 205, CAST(N'2018-06-11' AS Date), N'P', 1, 3, 19)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (32, 263, CAST(N'2018-06-12' AS Date), N'IN', 1, 3, 14)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (33, 143, CAST(N'2018-06-12' AS Date), N'A', 1, 2, 17)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (34, 130, CAST(N'2018-06-12' AS Date), N'IN', 0.5, 3, 14)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (35, 129, CAST(N'2018-06-12' AS Date), N'D', 1.5, 2, 12)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (36, 241, CAST(N'2018-06-12' AS Date), N'G', 0.25, 2, 12)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (37, 287, CAST(N'2018-06-13' AS Date), N'SE', 1, 1, 17)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (38, 225, CAST(N'2018-06-13' AS Date), N'CV', 0.25, 1, 12)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (39, 303, CAST(N'2018-06-13' AS Date), N'D', 1.5, 2, 19)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (40, 311, CAST(N'2018-06-13' AS Date), N'SE', 1, 1, 17)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (41, 116, CAST(N'2018-06-13' AS Date), N'CC', 1.5, 4, 17)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (42, 164, CAST(N'2018-06-13' AS Date), N'G', 1, 4, 14)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (43, 275, CAST(N'2018-06-14' AS Date), N'SE', 0.5, 1, 17)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (44, 298, CAST(N'2018-06-14' AS Date), N'IN', 1, 3, 14)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (45, 255, CAST(N'2018-06-14' AS Date), N'D', 0.25, 2, 14)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (46, 141, CAST(N'2018-06-14' AS Date), N'G', 1, 2, 12)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (47, 321, CAST(N'2018-06-14' AS Date), N'CC', 1.25, 1, 19)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (48, 263, CAST(N'2018-06-14' AS Date), N'IN', 0.25, 3, 14)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (49, 217, CAST(N'2018-06-15' AS Date), N'CV', 1, 2, 19)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (50, 129, CAST(N'2018-06-15' AS Date), N'D', 0.5, 2, 12)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (51, 157, CAST(N'2018-06-15' AS Date), N'D', 1.5, 3, 14)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (52, 241, CAST(N'2018-06-15' AS Date), N'G', 0.25, 2, 12)
INSERT [dbo].[Billing] ([BillingID], [ClientID], [Date], [CategoryID], [Hours], [RateID], [AttorneyID]) VALUES (53, 129, CAST(N'2018-06-15' AS Date), N'D', 0.5, 2, 12)
SET IDENTITY_INSERT [dbo].[Billing] OFF
GO
INSERT [dbo].[Categories] ([CategoryID], [Category]) VALUES (N'A', N'Adoption')
INSERT [dbo].[Categories] ([CategoryID], [Category]) VALUES (N'CC', N'Child Custody')
INSERT [dbo].[Categories] ([CategoryID], [Category]) VALUES (N'CV', N'Child Visitation')
INSERT [dbo].[Categories] ([CategoryID], [Category]) VALUES (N'D', N'Divorce')
INSERT [dbo].[Categories] ([CategoryID], [Category]) VALUES (N'G', N'Guardianship')
INSERT [dbo].[Categories] ([CategoryID], [Category]) VALUES (N'IN', N'Incorporation')
INSERT [dbo].[Categories] ([CategoryID], [Category]) VALUES (N'P', N'Paternity')
INSERT [dbo].[Categories] ([CategoryID], [Category]) VALUES (N'SE', N'Support Enforcement')
GO
SET IDENTITY_INSERT [dbo].[Clients] ON 

INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (110, N'Margaret', N'Kasper', N'40210 42nd Avenue', N'Auburn', N'WA', N'98001', N'(253) 555-9003')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (112, N'Haley', N'Brown', N'3219 North 33rd Street', N'Auburn', N'WA', N'98001', N'(253) 555-3948')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (116, N'Kevin', N'Stein', N'12034 South 22nd Avenue', N'Kent', N'WA', N'98035', N'(253) 555-2980')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (121, N'Doris', N'Sturtevant', N'3713 Nelton Road', N'Auburn', N'WA', N'98001', N'(253) 555-3120')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (125, N'Maddie', N'Singh', N'450 Mill Avenue', N'Renton', N'WA', N'98228', N'(253) 555-6673')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (129, N'James', N'Weyland', N'2533 145th Street East', N'Kent', N'WA', N'98031', N'(253) 555-8122')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (130, N'Abigail', N'Jefferson', N'1204 Meridian Road', N'Auburn', N'WA', N'98001', N'(253) 555-5665')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (138, N'Mira', N'Valencia', N'114 Springfield Avenue', N'Renton', N'WA', N'98056', N'(425) 555-2216')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (141, N'Consuelo', N'Day', N'13321 North Lake Drive', N'Kent', N'WA', N'98036', N'(253) 555-0998')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (143, N'Matthew', N'Waide', N'18391 North 45th Street', N'Renton', N'WA', N'98055', N'(425) 555-5599')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (144, N'Carlina', N'McFadden', N'7809 52nd Street East', N'Auburn', N'WA', N'98001', N'(253) 555-2939')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (157, N'Arthur', N'Williams', N'23110 North 33rd Street', N'Renton', N'WA', N'98230', N'(253) 555-4889')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (164, N'Jean', N'Briggs', N'2110 West Valley Avenue', N'Kent', N'WA', N'98036', N'(253) 555-8992')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (187, N'Chris', N'Cervantez', N'8722 Riverside Road', N'Renton', N'WA', N'98228', N'(425) 555-7263')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (205, N'Karl', N'Cordes', N'240 Mill Avenue', N'Renton', N'WA', N'98055', N'(425) 555-2811')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (217, N'Arthur', N'Norheim', N'10533 Ashton Boulevard', N'Kent', N'WA', N'98036', N'(253) 555-8996')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (225, N'Jennifer', N'Czubek', N'8790 34th Avenue', N'Renton', N'WA', N'98228', N'(425) 555-3441')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (230, N'Christina', N'Miles', N'13043 South 25th Avenue', N'Kent', N'WA', N'98036', N'(253) 555-9904')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (241, N'Ewan', N'Aragato', N'904 Marine View Drive', N'Auburn', N'WA', N'98002', N'(253) 555-0113')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (255, N'Janice', N'Saunders', N'2757 179th Avenue East', N'Kent', N'WA', N'98032', N'(253) 555-7751')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (263, N'Charles', N'Hobart', N'11038 132nd Street', N'Renton', N'WA', N'98056', N'(425) 555-1323')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (275, N'Tricia', N'O''Connor', N'3824 Sanders Court', N'Auburn', N'WA', N'98002', N'(253) 555-4493')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (287, N'Taylor', N'Reyes', N'201 Northwest Boulevard', N'Renton', N'WA', N'98056', N'(425) 555-8866')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (298, N'Mindy', N'Garvison', N'68 Queens Avenue', N'Kent', N'WA', N'98033', N'(253) 555-1195')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (303, N'Eric', N'Rosenthal', N'1230 Maplewood Road', N'Auburn', N'WA', N'98071', N'(253) 555-3375')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (311, N'Carol', N'Kendall', N'24 Ferris Parkway', N'Kent', N'WA', N'98003', N'(253) 555-4609')
INSERT [dbo].[Clients] ([ClientID], [FirstName], [LastName], [StreetAddress], [City], [State], [ZipCode], [Telephone]) VALUES (321, N'Jeffrey', N'Smith', N'317 Meridian Street', N'Kent', N'WA', N'98033', N'(253) 555-3129')
SET IDENTITY_INSERT [dbo].[Clients] OFF
GO
SET IDENTITY_INSERT [dbo].[Rates] ON 

INSERT [dbo].[Rates] ([RateID], [Rate]) VALUES (1, 200.0000)
INSERT [dbo].[Rates] ([RateID], [Rate]) VALUES (2, 250.0000)
INSERT [dbo].[Rates] ([RateID], [Rate]) VALUES (3, 300.0000)
INSERT [dbo].[Rates] ([RateID], [Rate]) VALUES (4, 325.0000)
INSERT [dbo].[Rates] ([RateID], [Rate]) VALUES (5, 350.0000)
SET IDENTITY_INSERT [dbo].[Rates] OFF
GO
ALTER TABLE [dbo].[Billing]  WITH CHECK ADD  CONSTRAINT [FK_Billing_Attorneys] FOREIGN KEY([AttorneyID])
REFERENCES [dbo].[Attorneys] ([AttorneyID])
GO
ALTER TABLE [dbo].[Billing] CHECK CONSTRAINT [FK_Billing_Attorneys]
GO
ALTER TABLE [dbo].[Billing]  WITH CHECK ADD  CONSTRAINT [FK_Billing_Categories] FOREIGN KEY([CategoryID])
REFERENCES [dbo].[Categories] ([CategoryID])
GO
ALTER TABLE [dbo].[Billing] CHECK CONSTRAINT [FK_Billing_Categories]
GO
ALTER TABLE [dbo].[Billing]  WITH CHECK ADD  CONSTRAINT [FK_Billing_Clients] FOREIGN KEY([ClientID])
REFERENCES [dbo].[Clients] ([ClientID])
GO
ALTER TABLE [dbo].[Billing] CHECK CONSTRAINT [FK_Billing_Clients]
GO
ALTER TABLE [dbo].[Billing]  WITH CHECK ADD  CONSTRAINT [FK_Billing_Rates] FOREIGN KEY([RateID])
REFERENCES [dbo].[Rates] ([RateID])
GO
ALTER TABLE [dbo].[Billing] CHECK CONSTRAINT [FK_Billing_Rates]
GO
USE [master]
GO
ALTER DATABASE [LawFirmDB] SET  READ_WRITE 
GO
